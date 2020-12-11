#include <Wire.h>
#include <Adafruit_MCP4725.h>
#include "DAC.h"
 
#define MCP4725In A0
 
Adafruit_MCP4725 MCP4725;
 
void dac_setup(void) 
{
 Serial.begin(9600);
 MCP4725.begin(0x60); // The I2C Address of my module (standard for A0 = 0)
}
 
void dac_test(void) 
{
 uint32_t MCP4725_value;
 int adcInput = 0;
 float voltageIn = 0; 
 float MCP4725_reading;
 
 for (MCP4725_value = 0; MCP4725_value < 4096; MCP4725_value = MCP4725_value + 128)
 {
 MCP4725_reading = (3.3/4096.0) * MCP4725_value; //3.3 is your supply voltage
 MCP4725.setVoltage(MCP4725_value, false);
 delay(250);
 adcInput = analogRead(MCP4725In); //module output connect to A0
 voltageIn = (adcInput * 3.3 )/ 4096.0; 
 
 Serial.print("\tExpected Voltage: ");
 Serial.print(MCP4725_reading,3);
 
 Serial.print("\tESP32 Voltage: "); 
 Serial.println(voltageIn,3);
 } 
}