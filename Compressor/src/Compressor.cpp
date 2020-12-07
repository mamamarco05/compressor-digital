/* *********************************************************************** */
/* File name:        Compressor.cpp                                            */
/* File description: File containing the prototypes of the functions used  */
/*                   to configure and use digital audio compressor                         */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    07dez2020                                             */
/* Revision date:    07dez2020                                             */
/* *********************************************************************** */


#include "Compressor.h"
#include <math.h>

#define		BUFFER_LEN		1024 //buffer size/maximum audio file size 


static void read_file (const char * fname)
{	static short buffer [BUFFER_LEN] ;

	SndfileHandle file ;

	file = SndfileHandle (fname) ;

	printf ("Opened file '%s'\n", fname) ;
	printf ("    Sample rate : %d\n", file.samplerate ()) ;
	printf ("    Channels    : %d\n", file.channels ()) ;

	file.read (buffer, BUFFER_LEN) ;

	puts ("") ;


} 

static void compress_vert(double *data, double *threshold, double *ratio, double *gain){
    
    double data_db;

    data_db = 20 * log10(abs(*data)); //db FS

    if (data_db > (*threshold)){

        data_db = (*threshold - data_db)*(*ratio) + data_db;

    }

    *data = (*gain) * data_db;

}
