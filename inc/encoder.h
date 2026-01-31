#ifndef ENCODER_H_
#define ENCODER_H_

#include "common.h"
typedef struct Encoder
{
  int8_t position;
  uint8_t resolution;
  int8_t angle;
} Encoder_t;

void encoderInit(void);

#endif