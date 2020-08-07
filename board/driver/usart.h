#ifndef USART_H
#define USART_H

#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#define FOCS 2000000
#define BAUD 9600
#define MYUBRR FOCS/16/BAUD-1
void usartInit(unsigned int ubrr);
void usartTransmit(unsigned char data);
unsigned char usartReceive(void);
int print(char c, FILE *stream);

#endif // USART_H
