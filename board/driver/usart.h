#include <avr/io.h>
#define FOCS 2000000
#define BAUD 9600
#define MYUBRR FOCS/16/BAUD-1
void usartInit(unsigned int ubrr);
void usartTransmit(unsigned char data);
unsigned char usartReceive(void);
