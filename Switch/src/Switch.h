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
#include ">Arduino.h"
#include <Wire.h>
/* definitions */

/* class */
class Switch
{
    private:
        int _iPin;
        int _nButton; //button identifier: 1, 2 ou 3
        int _sButton; //status of the button, 0 means off, 1 means on

    public:
        /* ************************************************** */
        /* Method name:        switch_init                    */
        /* Method description: Initialize the switch device   */
        /* Input params:       iPin, nButton, sButton         */
        /* Output params:      n/a                            */
        /* ************************************************** */
        void switch_init(int iPin, int nButton, int sButton);

        /* ************************************************** */
        /* Method name:        switch_getStatus               */
        /* Method description: Get status of specified switch */
        /* Input params:       None, depends on object        */
        /* Output params:      sButton                        */
        /* ************************************************** */
        int switch_getStatus();

        /* ************************************************** */
        /* Method name:        switch_getPin               */
        /* Method description: Gets pin of specified switch */
        /* Input params:       None, depends on object        */
        /* Output params:      iPin                        */
        /* ************************************************** */
        int switch_getPin();

        /* ************************************************** */
        /* Method name:        switch_getButton               */
        /* Method description: Gets identifier button number of specified switch */
        /* Input params:       None, depends on object        */
        /* Output params:      nButton                        */
        /* ************************************************** */
        int switch_getButton();

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

#endif //_SWITCH_H