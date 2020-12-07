/* *********************************************************************** */
/* File name:        Switch.h                                              */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to configure and use switches                    */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

#ifndef _SWITCH_H
#define _SWITCH_H

#define ON							1 
#define OFF							0

/* includes */
#include "Arduino.h"
#include <Wire.h>
/* definitions */

/* class */
class Switch
{
    public:
        int _iPin;
        int _nButton; //button identifier: 1, 2 ou 3
        int _sButton; //status of the button, 0 means off, 1 means on

    
        /* ************************************************** */
        /* Method name:        Switch constructor                    */
        /* Method description: Initialize the switch device   */
        /* Input params:       iPin, nButton, sButton         */
        /* Output params:      n/a                            */
        /* ************************************************** */
        Switch(int iPin, int nButton, int sButton);

};



#endif //_SWITCH_H