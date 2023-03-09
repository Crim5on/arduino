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
make sure arduino driver is installed 
```sudo apt install arduino```

check distribution:
```cat /etc/*-release | grep PRETTY_NAME```

under Ubuntu / Debian:
```sudo apt install -y gcc-avr binutils-avr avr-libc avrdude make```

under Fedora / Red Hat:
```sudo dnf install -y avr-gcc avr-binutils avr-libc avrdude make```

## Find port on which Arduino is connected to
```sudo dmesg``` 
plug USB device in and rund cmd again
```sudo dmesg``` 
check for the last entry to find something like this:
```[16208.532075] usb 1-1: New USB device found, idVendor=1a86, idProduct=7523, bcdDevice= 2.54``

