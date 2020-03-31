MCU=attiny441
PROGRAMMER=atmelice_isp
F_CPU=1000000 
CC=avr-gcc
OBJCOPY=avr-objcopy
CFLAGS=-Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU}
TARGET=main
SRC=main.c 

all:
	${CC} ${CFLAGS} ${SRC} -o firmware/${TARGET}.bin -std=c99
	${OBJCOPY} -j .text -j .data -O ihex firmware/${TARGET}.bin firmware/${TARGET}.hex

flash:
	avrdude -p ${MCU} -c ${PROGRAMMER} -U flash:w:firmware/${TARGET}.hex:i -P usb

clean:
	rm -R firmware/*.bin firmware/*.hex
