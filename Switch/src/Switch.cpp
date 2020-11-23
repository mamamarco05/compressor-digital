/* *********************************************************************** */
/* File name:        Switch.cpp                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use switches                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

/* includes */
#include "Switch.h"

/* functions */

Switch::Switch(int iPin, int nButton, int sButton){
    pinMode(iPin, INPUT);
    _iPin = iPin;    
    _nButton = nButton;
    _sButton = sButton;
}

void switch_read(){

    while(true){
        if (digitalRead(button1._iPin)){
            button1._sButton = ON;
        }
        else if (!digitalRead(button1._iPin)){
            button1._sButton = OFF;
        }
        else if (digitalRead(button2._iPin)){
            button2._sButton = ON;
        }
        else if (!digitalRead(button2._iPin)){
            button2._sButton = OFF;
        }
        else if (digitalRead(button3._iPin)){
            button3._sButton = ON;
        }
        else if (!digitalRead(button3._iPin)){
            button3._sButton = OFF;
        }
        delay(10);

    }

}