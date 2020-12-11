/* *********************************************************************** */
/* File name:        DAC.h                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use digital-analog sampling                        */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */

/* ************************************************** */
/* Method name:        dac_setup                    */
/* Method description: sets up esp32's dac converter   */
/* Input params:       n/a         */
/* Output params:      n/a                            */
/* ************************************************** */
void dac_setup(void) ;

/* ************************************************** */
/* Method name:        dac_test                    */
/* Method description: applies equally spaced digital values to DAC's output and reads them to see if they match   */
/* Input params:       n/a         */
/* Output params:      n/a                            */
/* ************************************************** */
void dac_test(void);