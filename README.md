# Arduino
Playground for tinkering with Arduino Uno SMD, feauturing the Atmel ATmega328P (SMD) MCU.



## avr_hal
Hardware Abstraction Layer Template for Arduino Uno SMD featuring the ATmega328P microcontroller

## blink
Minimal working example (MWE) for blink on Arduio.



## Makefile Usage

compile
```make```

uploade to Arduino
```make upload```

clean Up
```make clean```



## How to set up the AVR toolchain
NOTE: make sure arduino driver is installed (e.g. by installing the Arduino IDE)

check distribution:
```cat /etc/*-release | grep PRETTY_NAME```

under Ubuntu / Debian:
```sudo apt install -y gcc-avr binutils-avr avr-libc avrdude make```

under Fedora / Red Hat:
```sudo dnf install -y avr-gcc avr-binutils avr-libc avrdude make```



