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

void Switch::switch.init(int iPin, int nButton, int sButton){
    pinMode(iPin, INPUT_PULLUP);
    _iPin = iPin;    
    _nButton = nButton;
    _sButton = sButton;
}

int Switch::switch.getStatus(){
    return _nButton;
}

int Switch::switch.getPin(){
    return _iPin;
}

int Switch::switch.getStatus(){
    return _sButton;
}

void Switch::switch.setStatus( int sButton){
    _sButton = sButton;
}

void Switch::switch.read(){

    while(true){
        if (digitalRead(button1.getPin())){
            button1.setStatus(ON);
        }
        else if (!(digitalRead(button1.getPin()))){
            button1.setStatus(OFF);
        }
        if (digitalRead(button2.getPin())){
            button1.setStatus(ON);
        }
        else if (!(digitalRead(button2.getPin()))){
            button1.setStatus(OFF);
        }
        if (digitalRead(button3.getPin())){
            button1.setStatus(ON);
        }
        else if (!(digitalRead(button3.getPin()))){
            button1.setStatus(OFF);
        }
            delay(10);

    }

}