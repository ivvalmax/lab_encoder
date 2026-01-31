#include "inc/common.h"
#include "inc/encoder.h"
#include "inc/sevenSegment.h"

void allInit(void);

extern Encoder_t encoder;

int main(void)
{
  allInit();
  sevenSegmentClear();

  while(1)
  {
    sevenSegmentWrite(&encoder);
    _delay_ms(20);
  }
}

void allInit(void)
{
  encoderInit();
  sevenSegmentInit();
  sei();
}