
#include <avr/io.h>
#define F_CPU 14745600UL
#include "systimer.h"

void systimer_callback(void)
{
  PORTD ^= 0b11000000;
}

int main(void)
{

  DDRD |= 0b11000000;
  PORTD |= 0b11000000;

  systimer_init(231); // in ms
  
  while (1) 
  {
  }
}
