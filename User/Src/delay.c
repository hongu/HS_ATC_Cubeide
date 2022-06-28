#include "delay.h"


void uDelay(uint32_t delay)
{
   volatile uint32_t ii;

   while( delay )   {
      delay --;
      ii = 22;
      while(ii--);

   }
}