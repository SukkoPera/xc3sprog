#ifndef __IO_MATRIX_CREATOR__
#define __IO_MATRIX_CREATOR__

#include "iowiringpi.h"

#ifdef HAVE_WIRINGPI

class IOMatrixCreator : public IOWiringPi
{
 public:
  IOMatrixCreator();
};

#endif

#endif
