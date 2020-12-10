#include "adc.h"


#define SAMPLE_RATE 44100
#define PIN_I2S_BCLK 1 /*definir esses 3 conforme conexoes na placa*/
#define PIN_I2S_LRC  1
#define PIN_I2S_DIN  1

void i2s_setup(){

  const i2s_config_t i2s_config = {
    .mode = i2s_mode_t(I2S_MODE_SLAVE  | I2S_MODE_RX), // Receive, not transfer
    .sample_rate = SAMPLE_RATE,                         // 44.1KHz
    .bits_per_sample = I2S_BITS_PER_SAMPLE_32BIT, // could only get it to work with 32bits
    .channel_format = I2S_CHANNEL_FMT_RIGHT_LEFT, // use both right and left channels
    .communication_format = i2s_comm_format_t(I2S_COMM_FORMAT_I2S | I2S_COMM_FORMAT_I2S_MSB), /*conferir aqui se usa MSB ou nao, testar*/
    .intr_alloc_flags = ESP_INTR_FLAG_LEVEL1,     // Interrupt level 1
    .dma_buf_count = 4,                           // number of buffers
    .dma_buf_len = 8                              // 8 samples per buffer (minimum) /*total 32 bits*/
  };    

  const i2s_pin_config_t pin_config = {
    .bck_io_num = PIN_I2S_BCLK,   // Serial Clock (SCK)
    .ws_io_num = PIN_I2S_LRC,    // Word Select (WS)
    .data_out_num = I2S_PIN_NO_CHANGE, // not used (only for speakers)
    .data_in_num = PIN_I2S_DIN   // Serial Data (SD)
  };
  
  i2s_driver_install(I2S_NUM_0, &i2s_config, 0, NULL);
  i2s_set_pin(I2S_NUM_0, &pin_config);

}

uint32_t bytes_read;
uint32_t samples[1024]; /*mudar o tamanho desse vetor?*/

void i2s_teste(){ /*colocar dentro de 'loop' no platformIO*/


  i2s_read(I2S_NUM_0, (char*)samples, 1024 * sizeof(uint32_t), &bytes_read, portMAX_DELAY);
    
  for (int i = 0; i < 1024; i++)
  {
      uint32_t dat = (samples[i] & 0x7FFFFF); 
      if (samples[i]&0x800000) dat|=0xff800000; //sign extend 24-bit value to 32-bit
      int32_t signed_sample=(int32_t)dat;
      Serial.printf("%d\n", signed_sample);
  }  

  delay(1000);



}