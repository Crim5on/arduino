#pragma once

#include <stdint.h>
#include <stdbool.h>

#include <avr/io.h>
#define F_CPU 16000000  // set CPU frequency in Hz
#include <util/delay.h>

#define HIGH 1
#define LOW 0


typedef enum {
    INPUT,
    OUTPUT,
    PWM_OUTPUT
} Mode;


typedef enum {
//  Arduino         ATmega
    DI0_RX,         // PD0
    DI1_TX,         // PD1
    // Digital I/O Pins
    DI2,            // PD2
    DI3_PWM,        // PD3
    DI4,            // PD4
    DI5_PWM,        // PD5
    DI6_PWM,        // PD6
    DI7,            // PD7
    // - - - 
    DI8,            // PB0
    DI9_PWM,        // PB1
    DI10_PWM,       // PB2
    DI11_PWM,       // PB3
    DI12,           // PB4
    DI13_LED,       // PB5
    // Analog Input Pins
    AI0,            // PC0
    AI1,            // PC1
    AI2,            // PC2
    AI3,            // PC3
    AI4,            // PC4
    AI5             // PC5
} ArduinoPin;


void setPinMode(uint8_t pin, Mode mode);

void digitalWrite(uint8_t pin, bool value);

bool digitalRead(uint8_t pin);

void setPullUpResistor(uint8_t pin, bool enable);
