/* *********************************************************************** */
/* File name:        Compressor.h                                          */
/* File description: Header file containing the prototypes of the functions*/
/*                   used to execute audio compression                     */
/* Author name:      Marco A D'Angelo, Rennan Y Nishimori, Tiago R Menezes */
/* Creation date:    09nov2020                                             */
/* Revision date:    09nov2020                                             */
/* *********************************************************************** */

#ifndef _COMPRESSOR_H
#define _COMPRESSOR_H

/* includes */

/* definitions */

/* class */
class CompressorParameters
{
    private:
        /* parameters of compression */
        float fThreshold;
        float fRatio;
        float fAttack;
        float fRelease;
        float fGain;

    public:
        /* ***************************************************** */
        /* Method name:        compressorParameters_getThreshold */
        /* Method description: get threshold value               */
        /* Input params:       n/a                               */
        /* Output params:      fThreshold                        */
        /* ***************************************************** */
        float compressorParameters_getThreshold();

        /* ***************************************************** */
        /* Method name:        compressorParameters_setThreshold */
        /* Method description: set threshold value               */
        /* Input params:       fThreshold                        */
        /* Output params:      n/a                               */
        /* ***************************************************** */
        void compressorParameters_setThreshold(float fThreshold);

        /* ***************************************************** */
        /* Method name:        compressorParameters_getRatio     */
        /* Method description: get ratio value                   */
        /* Input params:       n/a                               */
        /* Output params:      fRatio                            */
        /* ***************************************************** */
        float compressorParameters_getRatio();

        /* ***************************************************** */
        /* Method name:        compressorParameters_setRatio     */
        /* Method description: set ratio value                   */
        /* Input params:       fRatio                            */
        /* Output params:      n/a                               */
        /* ***************************************************** */
        void compressorParameters_setRatio(float fRatio);

        /* ***************************************************** */
        /* Method name:        compressorParameters_getAttack    */
        /* Method description: get attack value                  */
        /* Input params:       n/a                               */
        /* Output params:      fAttack                           */
        /* ***************************************************** */
        float compressorParameters_getAttack();

        /* ***************************************************** */
        /* Method name:        compressorParameters_setAttack    */
        /* Method description: set attack value                  */
        /* Input params:       fAttack                           */
        /* Output params:      n/a                               */
        /* ***************************************************** */
        void compressorParameters_setAttack(float fAttack);

        /* ***************************************************** */
        /* Method name:        compressorParameters_getRelease   */
        /* Method description: get release value                 */
        /* Input params:       n/a                               */
        /* Output params:      fRelease                          */
        /* ***************************************************** */
        float compressorParameters_getRelease();

        /* ***************************************************** */
        /* Method name:        compressorParameters_setRelease   */
        /* Method description: set release value                 */
        /* Input params:       fRelease                          */
        /* Output params:      n/a                               */
        /* ***************************************************** */
        void compressorParameters_setRelease(float fRelease);

        /* ***************************************************** */
        /* Method name:        compressorParameters_getGain      */
        /* Method description: get output gain value             */
        /* Input params:       n/a                               */
        /* Output params:      fGain                             */
        /* ***************************************************** */
        float compressorParameters_getGain();

        /* ***************************************************** */
        /* Method name:        compressorParameters_setGain      */
        /* Method description: set output gain value             */
        /* Input params:       fGain                             */
        /* Output params:      n/a                               */
        /* ***************************************************** */
        void compressorParameters_setGain(float fGain);
}

class Compressor : public CompressorParameters
{
    private:
         
    public:
        /* ************************************************** */
        /* Method name:        compressor_init                */
        /* Method description: Initialize the compressor      */
        /* Input params:       n/a                            */
        /* Output params:      n/a                            */
        /* ************************************************** */
        void compressor_init();

        /* ************************************************** */
        /* Method name:        compressor_RMS                 */
        /* Method description: Calculate the RMS value of an  */
        /*                     audio sample                   */
        /* Input params:       fSample                        */
        /* Output params:      fRMS                           */
        /* ************************************************** */
        float compressor_RMS(float fSample);

        /* ************************************************** */
        /* Method name:        compressor_getRamp             */
        /* Method description: Calculate the transition ramp  */
        /*                     given a attack/release target  */
        /*                     and a time                     */
        /* Input params:       fTarget, fTime                 */
        /* Output params:      fRamp                           */
        /* ************************************************** */
        float compressor_getRamp(float fTarget, float fTime);

        /* ************************************************** */
        /* Method name:        compressor_perform             */
        /* Method description: Perform the audio compression  */
        /*                     in an audio sample and return  */
        /*                     the compressed sample          */
        /* Input params:       fSample                        */
        /* Output params:      fCompSample                    */
        /* ************************************************** */
        float compressor_perform(float fSample);
}

#endif //_COMPRESSOR_H