#include "../driver/mpx5100.h"
#include "../driver/adc.h"


/** @defgroup group2 MPX5100 Library
 *  This library interfaces with the MPX5100.
 *  @{
 */

/** This function return the sensor reading in Pascals. */
void getPascal(void) {
	adc_val = adcRead();
	pascal = ((adc_val / 1023.0) * MAX_PRESSURE) * 1000.0;
 	printf("%.2f Pa\n", pascal);
	_delay_ms(250);
}

/** @} */ // end of group2
