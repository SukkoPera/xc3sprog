#ifdef HAVE_WIRINGPI

#include "iomatrixcreator.h"

IOMatrixCreator::IOMatrixCreator()
 : IOWiringPi(4, 17, 22, 27) 
{
}

#endif
