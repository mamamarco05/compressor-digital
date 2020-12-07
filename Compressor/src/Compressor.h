/* *********************************************************************** */
/* File name:        Compressor.h                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use digital audio compressor                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */

#ifndef _SWITCH_H
#define _SWITCH_H

#include	<cstdio>
#include	<cstring>
#include	<sndfile.hh>



/* ************************************************** */
/* Method name:        read_file                    */
/* Method description: reads audio files   */
/* Input params:       const char * fname         */
/* Output params:      n/a                            */
/* ************************************************** */
static void read_file (const char * fname);
 

/* ************************************************** */
/* Method name:        compress_vert                    */
/* Method description: vertical part of the compression   */
/* Input params:       double *data, double *threshold, double *ratio, double *gain         */
/* Output params:      n/a                            */
/* ************************************************** */
static void compress_vert(double *data, double *threshold, double *ratio, double *gain);

#endif //_SWITCH_H