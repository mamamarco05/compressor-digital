/* *********************************************************************** */
/* File name:        adc.h                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use analog-digital sampling                        */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */

#include "driver/i2s.h"


/* ************************************************** */
/* Method name:        i2s_setup                    */
/* Method description: sets up esp32's i2s protocol for sampling   */
/* Input params:       n/a         */
/* Output params:      n/a                            */
/* ************************************************** */
void i2s_setup();