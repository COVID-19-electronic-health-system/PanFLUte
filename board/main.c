#include "driver/usart.h"
#include "driver/led.h" 

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);

int main(void) {
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
    	printf("%d\n", 21 + 79);
	delay_ms(1000);
    }
    return 0;
}
