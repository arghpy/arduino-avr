// Copyright 2024 Arghpy

#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  // Set data for Port D2
  DDRD |= (1 << DDD2);

  while (1) {
    // Set to output to PORTD2
    PORTD |= (1 << PORTD2);

    // wait
    _delay_ms(1000);

    // set down PORTD5
    PORTD &= ~(1 << PORTD2);

    // wait
    _delay_ms(1000);
  }
}
