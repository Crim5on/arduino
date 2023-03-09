#include <stdlib.h>
#include "hal/pin.h"



void setup(void)
{
    setPinMode(D13, OUTPUT);
}


void loop(void)
{
    digitalWrite(D13, HIGH);
    _delay_ms(100);
    digitalWrite(D13, LOW);
    _delay_ms(1500);
}


int main (void)
{
    setup();

    while(true) {
        loop();
    }

    return EXIT_SUCCESS;
}
