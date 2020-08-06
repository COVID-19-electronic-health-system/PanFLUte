#include "../driver/adc.h"

void getPascal(void) {
	adc_val = adcRead();
	pascal = ((adc_val / 1023) * MAX_PRESSURE) * 1000;
 	printf("%.2f Pa\n" pascal);
}
