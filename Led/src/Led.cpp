/* *********************************************************************** */
/* File name:        Led.cpp                                               */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use LEDS                             */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

/* includes */
#include "Arduino.h"
#include "Led.h"


void Led::led_init(int iPin){    
    pinMode(iPin, OUTPUT);
    _iPin = iPin;
}

void Led::led_set(bool bStatus)
{
    if(bStatus)
    {
        digitalWrite(_iPin, HIGH);
    }
    else
    {
        digitalWrite(_iPin, LOW);
    }
       
}


void teste_led(){
    while(true){
        if (button1.sButton = ON or button2.sButton = ON or button3.sButton = ON){
            led1.led_set(true);
        }
        else led1.led_set(false);
    }


}