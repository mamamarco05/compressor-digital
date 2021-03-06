/* *********************************************************************** */
/* File name:        Led.h                                                 */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to configure and use LEDS                        */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    08nov2020                                             */
/* Revision date:    08nov2020                                             */
/* *********************************************************************** */

#ifndef _LED_H
#define _LED_H

/* includes */
#include "Arduino.h"

/* definitions */

/* class */
class Led
{
    
    public:
        /* ************************************************ */
        /* Method name:        Led constructor                     */
        /* Method description: Initialize the LED device    */
        /* Input params:       iPin                         */
        /* Output params:      n/a                          */
        /* ************************************************ */
        Led(int iPin);

        /* ************************************************ */
        /* Method name:        led_set                      */
        /* Method description: Set status of specified LED  */
        /* Input params:       bStatus                     */
        /* Output params:      n/a                          */
        /* ************************************************ */
        void led_set(bool bStatus);

    
        int _iPin;        
};



#endif //_LED_H