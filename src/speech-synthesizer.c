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

#define  DOUT  PB1       // serial data out
#define  USCK  PB2       // serial clock out
#define  ALD   PB3       // address load, output, pulsed low to load allophone
#define  LRQ   PB4       // load request, input, pulled low when the next allophone can be loaded

uint8_t phrase[] = {HELLO, PA5, I, PA3, AM, PA3, THE, PA3,
                    GENERAL, PA3, INSTRUMENT, PA3,
                    S, P, ZERO, TWO, FIFTY, SIX, PA4, 
                    VARIANT, PA3, A, L, TWO};


void send(const uint8_t alloph)
{
  USIDR = alloph;           // put allophone in data register
  USISR |= 1 << USIOIF;     // clear counter overflow interrupt flag
  while(!(USISR & 1 << USIOIF)) 
    {USICR |= 1 << USITC;}  // output the allohphone & clock
  PORTB &= ~(1 << ALD);     // pulse ALD line low to load allophone
  _delay_us(1); 
  PORTB |= 1 << ALD;
}

int main(void)
{
  USICR |= 1 << USIWM0 | 1 << USICS1 | 1 << USICLK;   // SPI (3-wire) mode, external clock w/ software strobe
  
  DDRB  |= 1 << DOUT | 1 << USCK | 1 << ALD; 
  PORTB |= 1 << ALD;
  
  while(1)
  {
    for(int i = 0; i < sizeof(phrase)/sizeof(uint8_t); i++)
    {
      while(PINB & 1 << LRQ){}    // wait until the chip is ready
      send(phrase[i]);            // send the allophone
    }
    
    while(PINB & 1 << LRQ){}
    send(PA1);                    // end with silence instead of holding last allophone
    
    _delay_ms(2000);
  }
  return 0;
} 