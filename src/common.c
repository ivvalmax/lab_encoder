#include "../inc/common.h"

uint8_t digit(uint16_t d, uint8_t m)
{
  uint8_t i = 5, a;

  while (i)
  {
      a = d%10;
      if(i-- == m) 
        break;
      d /= 10;
  }

  return(a);
}