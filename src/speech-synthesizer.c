/**
 * Author: Michael Rosa
 * Date: June 2017
 *
 * Uses the USI of an ATtiny85 in SPI mode to drive a 74HC164 
 * shift register connected to an SP0256-AL2 speech synthesizer.
 *
 * Based on a Nuts & Volts column by Jon Williams published June 1998 
 */
 
#include <avr/io.h>
#include <util/delay.h>
#include "allophones.h"
#include "words.h"

#define  DO    PB1
#define  USCK  PB2
#define  ALD   PB3
#define  LRQ   PB4

uint8_t phrase[] = {HELLO, PA5, I, PA3, AM, PA3, THE, PA3,
                    GENERAL, PA3, INSTRUMENT, PA3,
                    S, P, ZERO, TWO, FIFTY, SIX, PA4, 
                    VARIANT, PA3, A, L, TWO, PA1};


void send(const uint8_t alloph)
{
  USIDR = alloph;
  USISR = 1 << USIOIF;
  while(!(USISR & 1 << USIOIF)) {USICR |= 1 << USITC;} 
  PORTB &= ~(1 << ALD); ;
  _delay_us(1); 
  PORTB |= 1 << ALD;
}

int main(void)
{
  USICR |= 1 << USIWM0 | 1 << USICS1 | 1 << USICLK;
  DDRB  |= 1 << DO | 1 << USCK | 1 << ALD;
  
  PORTB |= 1 << ALD;
  
  while(1)
  {
    for(int i = 0; i < sizeof(phrase)/sizeof(uint8_t); i++)
    {
      while(PINB & 1 << LRQ){}
      send(phrase[i]); 
    }
    
    _delay_ms(2000);
  }
  return 0;
} 