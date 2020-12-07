/* *********************************************************************** */
/* File name:        LCD.cpp                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use the LCD display                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */


#include "LCD.h"

LiquidCrystal_I2C lcd(ADDRESS, 20, 4); //instancing obj from liquidcrystral class
 
void lcd_init() {
 lcd.begin();
 lcd.backlight();
}