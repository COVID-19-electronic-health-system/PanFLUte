#include "driver/mpx5100.h"
#include "driver/usart.h"

static FILE mystdout = FDEV_SETUP_STREAM(print, NULL, _FDEV_SETUP_RW);

int main(void) {  
    adcInit(); 
    usartInit(MYUBRR);
    stdout = &mystdout;
    while(1) {	
	adcRead();
    }
}
