#ifdef HAVE_WIRINGPI

#include "iomatrixvoice.h"

IOMatrixVoice::IOMatrixVoice()
 : IOWiringPi(17, 27, 23, 22)                     
{
}

#endif
