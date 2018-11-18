#ifndef __IO_MATRIX_VOICE__
#define __IO_MATRIX_VOICE__

#include "iowiringpi.h"

#ifdef HAVE_WIRINGPI

class IOMatrixVoice : public IOWiringPi
{
 public:
  IOMatrixVoice();
};

#endif

#endif
