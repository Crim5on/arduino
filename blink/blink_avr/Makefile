## 
# Makefile for the Arduino Uno SMD feauturing the ATmega328P microcontroller.
#
# Notes for Makefile Noobs:
#
#	All makefile rules are structured like this:
# 		target:	prerequisites
#		<TAB> 	recipe
#
#	$@ means target
#	$^ means all prerequesites
#
##


# specify compiler
CC = avr-gcc

# define compiler flags
CFLAGS ?= -Os -DF_APU=16000000UL -mmcu=atmega328p -Wall -Wextra -Werror -std=c99

# define linker flags
LDFLAGS ?= -mmcu=atmega328p

# define USB path to Arduino
ARDUINO_USB ?= /dev/ttyACM0
#ARDUINO_USB ?= /dev/ttyUSB0


# final hexfile that can be flashed
all: main.hex

main.hex: main.run
	@echo "generating hexfile .."
	avr-objcopy -O ihex -R .eeprom main.run main.hex

main.run: main.o
	@echo "linking compiled files to main.run .."
	$(CC) $(LDFLAGS) -o $@ $^

main.o: main.c
	@echo "compiling main.c .."
	$(CC) $(CFLAGS) -c -o $@ $<

upload: main.hex
	@echo "flashing hex file to microcontroller .."
	avrdude -F -V -c arduino -p ATMEGA328p -P ${ARDUINO_USB} -b 115200 -U flash:w:main.hex  

clean:
	@echo "cleaning up .."
	rm -rf *.o **/*.o *.run **/*.run *.hex **/*.hex

# define all targets that are not files
.PHONY: clean upload all
