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
    pinMode(iPin, INPUT_PULLUP);
    _iPin = iPin;    
    _nButton = nButton;
    _sButton = sButton;
}
