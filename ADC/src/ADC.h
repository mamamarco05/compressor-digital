/* *********************************************************************** */
/* File name:        ADC.h                                                 */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to execute the PCM1802 A/D converter             */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    10nov2020                                             */
/* Revision date:    10nov2020                                             */
/* *********************************************************************** */

#ifndef _ADC_H
#define _ADC_H

/* includes */
#include 

/* definitions */

/* class */
class ADC
{
    private:
        /* Sample */
        float fCompSample;

    public:
        /* ************************************************** */
        /* Method name:        adc_init                       */
        /* Method description: Initialize the adc device      */
        /* Input params:       n/a                            */
        /* Output params:      n/a                            */
        /* ************************************************** */
        void adc_init();

        /* ************************************************** */
        /* Method name:        adc_initConvertion             */
        /* Method description: Initialize a/d convertion      */
        /* Input params:       n/a                            */
        /* Output params:      n/a                            */
        /* ************************************************** */
        void adc_initConvertion();

        /* ************************************************** */
        /* Method name:        adc_checkConvertion            */
        /* Method description: Check if a/d convertion is done*/
        /* Input params:       n/a                            */
        /* Output params:      ucIsDone                       */
        /* ************************************************** */
        unsigned char adc_checkConvertion();

        /* ************************************************** */
        /* Method name:        adc_getSample                  */
        /* Method description: Get the converted digital      */
        /*                     sample                         */
        /* Input params:       n/a                            */
        /* Output params:      fCompSample                    */
        /* ************************************************** */
        float adc_getSample();
}

#endif //_COMPRESSOR_H