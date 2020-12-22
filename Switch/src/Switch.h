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

        /* ************************************************** */
        /* Method name:        switch_read                    */
        /* Method description: Ongoing task that reads buttons 
                                and alters buttons' status. Buttons need to be 
                                instanced objects in main whose names are defined in this function */
        /* Input params:       &nButton (address)                     */
        /* Output params:      None                        */
        /* ************************************************** */
        void switch_read( void * pvParameters );
};



/* ************************************************** */
/* Method name:        state_machine                  */
/* Method description: Implements state-machine       */
/* Input params:       n/a                            */
/* Output params:      n/a                            */
/* ************************************************** */
void state_machine( void * pvParameters );


#endif //_SWITCH_H