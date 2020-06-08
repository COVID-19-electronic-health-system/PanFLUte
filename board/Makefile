MCU=attiny441
PROGRAMMER=atmelice_isp
F_CPU=1000000 
CC=avr-gcc
OBJCOPY=avr-objcopy
CFLAGS=-Wall -g -Os -mmcu=${MCU} -DF_CPU=${F_CPU} -Wl,-u,vfprintf -lprintf_flt -lm 
TARGET=main
SRC=main.c 
ADC_LIB=adc/adc.c
USART_LIB=usart/usart.c
MPX_LIB=mpx5100/mpx5100.c
LED_LIB=led/led.c

all:
	${CC} ${CFLAGS} ${SRC} ${ADC_LIB} ${USART_LIB} ${MPX_LIB} ${LED_LIB} -o firmware/${TARGET}.bin -std=c99  
	${OBJCOPY} -j .text -j .data -O ihex firmware/${TARGET}.bin firmware/${TARGET}.hex

flash:
	avrdude -p ${MCU} -c ${PROGRAMMER} -U flash:w:firmware/${TARGET}.hex:i -P usb

clean:
	rm -R firmware/*.bin firmware/*.hex
