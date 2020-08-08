#include "../driver/usart.h"

/** @defgroup group3 USART Library
 *  This library contains all the neccessary code for serial transmission.
 *  @{
 */

/** This function enables the receiver and tranmitter.*/
void usartInit(unsigned int ubrr) {
    /* Set baud rate */
    UBRR0H = (unsigned char)(ubrr >> 8);
    UBRR0L = (unsigned char)ubrr;
    /* Enable receiver and trasnmitter */
    UCSR0B = ((1 << RXEN0) | (1 << TXEN0));
    /* Set frame format: 8data, 1 stop bit */
    UCSR0C = ((1 << UCSZ00) | (1 << UCSZ01));
    UCSR0A = (1 << U2X0); // Double the USART Transmission Speed 
}

/** This function transmit data on the TX pin.*/ 
void usartTransmit(unsigned char data) {
    /* Wait for empty transmit buffer */
    while(!(UCSR0A & (1 << UDRE0))); 
    /* Put data into buffer, sends the data */
    UDR0 = data;
}

/** This function receives data from the RX pin.*/
unsigned char usartReceive(void) {
    /* Wait for data to be received */
    while(!(UCSR0A & (1 << RXC0)));
    /* Get and return received data from buffer */
    return UDR0;
}

int print(char c, FILE *stream) {
    while((UCSR0A & (1 << UDRE0)) == 0);
    UDR0 = c;
    return 0;
}

/** @} */ // end of group3 
