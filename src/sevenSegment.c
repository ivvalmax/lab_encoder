#include "../inc/sevenSegment.h"

const uint8_t segments[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D,0x7D, 0x07, 0x7F, 0x6F};

void sevenSegmentInit(void)
{
  DDRA |= (1 << PA1) | (1<<PA2) | (1 << PA3) | (1 << PA4) | (1 << PA5);
  DDRC |= (1 << PC0) | (1 << PC1) | (1 << PC2) | (1 << PC3) | (1 << PC4) | (1 << PC5) | (1 << PC6);  
}



