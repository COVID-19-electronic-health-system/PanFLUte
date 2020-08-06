#include "../driver/adc.h"

void getPascal(void) {
	adc_val = adcRead();
	pascal = ((adc_val / 1023.0) * MAX_PRESSURE) * 1000.0;
 	printf("%.2f Pa\n" pascal);
}
