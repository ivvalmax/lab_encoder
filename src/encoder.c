#include "../inc/encoder.h"


void encoderInit(void)
{
  sei();
  EICRA = (1 << ISC11)|(1 << ISC21);
  EIMSK = (1 << INT1)|(1 << INT2);
}

