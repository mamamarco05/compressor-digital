/* *********************************************************************** */
/* File name:        LCD.h                                              */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to configure and use the LCD display                    */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */


#ifndef _LCD_H
#define _LCD_H

#define ADDRESS         0x27 // I2C module address, 0x27 is the standard, have to check

#include "Arduino.h"
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


/* ************************************************** */
/* Method name:        lcd_init                    */
/* Method description: initializes the lcd display 
/* Input params:       None                     */
/* Output params:      None                           */
/* ************************************************** */
void lcd_init(void);


#endif //_LCD_H