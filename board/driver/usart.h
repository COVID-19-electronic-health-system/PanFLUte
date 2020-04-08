#include <avr/io.h>
#define CLKS 1000000
#define BAUD 9600
#define MYUBRR ((CLKS/16*BAUD) - 1)

void usartInit(unsigned int ubrr);
void usartTransmit(unsigned char data);
unsigned char usartReceive(void);
