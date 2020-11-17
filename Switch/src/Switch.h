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

/* includes */
#include "Arduino.h"
/* definitions */

/* class */
class Switch
{
    private:
        int _iPin;

    public:
        /* ************************************************** */
        /* Method name:        switch_init                    */
        /* Method description: Initialize the switch device   */
        /* Input params:       iPin                           */
        /* Output params:      n/a                            */
        /* ************************************************** */
        void switch_init(int iPin);

        /* ************************************************** */
        /* Method name:        switch_get                     */
        /* Method description: Get status of specified switch */
        /* Input params:       iPin                           */
        /* Output params:      ucStatus                       */
        /* ************************************************** */
        unsigned char switch_get(int iPin);
};

#endif //_SWITCH_H