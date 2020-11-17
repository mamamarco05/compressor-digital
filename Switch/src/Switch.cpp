/* *********************************************************************** */
/* File name:        Switch.cpp                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use switches                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

/* includes */
#include "Arduino.h"
#include "Switch.h"

/* functions */

void Switch::switch.init(int iPin){
    pinMode(iPin, INPUT_PULLUP);
    _iPin = iPin;    
}