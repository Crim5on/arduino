#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>



int setup(void)
{
    // Arduino digital pin 13 (pin 5 of PORTB) for output
    DDRB |= 0B100000;   // PORTB5

    return EXIT_SUCCESS;
}


void loop(void)
{
    // turn LED on
    PORTB |= 0B100000; // PORTB5
    _delay_ms(1000);

    // turn LED off
    PORTB &= ~ 0B100000; // PORTB5
    _delay_ms(1500);
}


int main (void)
{
    int success = setup();

    while(true) {
        loop();
    }

    return success;
}
