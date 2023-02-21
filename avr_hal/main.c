#include <stdlib.h>
#include "hal/pin.h"



void setup(void)
{
    setPinMode(DI13_LED, OUTPUT);
}


void loop(void)
{
    digitalWrite(DI13_LED, HIGH);
    _delay_ms(100);
    digitalWrite(DI13_LED, LOW);
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
