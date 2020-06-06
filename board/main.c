#include "driver/usart.h"
#include "driver/led.h" 

int main(void) {
    ledInit(); 
    usartInit(12);
    while(1) {	
	usartTransmit(10);
    	delay_ms(100);
    }
    return 0;
}
