/* ***************************************************************** */
/* File name:        main_teste.c                                          */
/* File description: Que executa e inicializa os periféricos botao e led, e faz o primeiro botao acender o led */
/* Author name:      Rennan Nishimori, Tiago Menezes e Marco D'Angelo                */
/* Creation date: 19/11/20                                          */
/* Revision date:                                          */
/* Revisão: Incluído testes na main e                                */
/* ***************************************************************** */

#include "Arduino.h"
#include "Led.h"
#include "Switch.h"
#include <Wire.h>

//pinos
//colocar o valor dos pinos
const uint8_t pin_led = 0;
const uint8_t pin_btn1 = 0;
const uint8_t pin_btn2 = 0;
const uint8_t pin_btn3 = 0;


//variaveis que indicam o nucleo
static uint8_t taskCoreZero = 0;
static uint8_t taskCoreOne  = 1;

//instanciando objetos  
Switch button1(pin_btn1,1,0); 
Switch button2(pin_btn2,2,0); 
Switch button3(pin_btn3,3,0); 

Led led1(pin_led); 

void setup(){
    
   //cria uma tarefa que será executada na função coreTaskTwo, com prioridade 2 e execução no núcleo 0
   //coreTaskTwo: vigiar o botão para detectar quando pressioná-lo
   xTaskCreatePinnedToCore(
                    switch_read(),   /* função que implementa a tarefa */
                    "switch_read", /* nome da tarefa */
                    10000,      /* número de palavras a serem alocadas para uso com a pilha da tarefa */
                    NULL,       /* parâmetro de entrada para a tarefa (pode ser NULL) */
                    1,          /* prioridade da tarefa (0 a N) */
                    NULL,       /* referência para a tarefa (pode ser NULL) */
                    taskCoreZero);         /* Núcleo que executará a tarefa */

    delay(500); //tempo para a tarefa iniciar                    


    //leitura dos leds
   xTaskCreatePinnedToCore(
                    teste_led,   /* função que implementa a tarefa */
                    "teste_led", /* nome da tarefa */
                    10000,      /* número de palavras a serem alocadas para uso com a pilha da tarefa */
                    NULL,       /* parâmetro de entrada para a tarefa (pode ser NULL) */
                    1,          /* prioridade da tarefa (0 a N) */
                    NULL,       /* referência para a tarefa (pode ser NULL) */
                    taskCoreOne);         /* Núcleo que executará a tarefa */

}

void loop() {}