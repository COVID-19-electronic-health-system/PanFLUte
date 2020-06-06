#include "driver/usart.h"
#include "driver/led.h" 

int main(void) {
    usartInit(MYUBRR);
    while(1) {	
	usartTransmit(54);
    	delay_ms(100);
    }
    return 0;
}
