#include "../driver/usart.h"

void usartInit(unsigned int ubrr) {
  /* Set baud rate */
  UBRR0H = (unsigned char)(ubrr >> 8);
  UBRR0L = (unsigned char)ubrr;
  /* Enable receiver and trasnmitter */
  UCSR0B = ((1 << RXEN0) | (1 << TXEN0));
  /* Set frame format: 8data, 1 stop bit */
  UCSR0C =((1 << UCSZ00) | (1 << USCZ00));
}


void usartTransmit(unsigned char data) {
  /* Wait for empty transmit buffer */
  while(! (UCSR0A) & (1 << UDRE0)); 
  /* Put data into buffer, sends the data */
  UDR0 = data;
}


unsigned char usartReceive(void) {
  /* Wait for data to be received */
  while(! (UCSR0A) & (1 << RXC0));
  /* Get and return received data from buffer */
  return UDR0;
}
