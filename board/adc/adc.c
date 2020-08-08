#include "../driver/adc.h"

/** @defgroup group1 TinyADC Library
 *  This is a minimal ADC Library with init and read functions only.
 *  @{
 */
 
/** Enables ADC. */
void adcInit(void) { 
  ADCSRA = (1 << ADEN) | (1 << ADSC);
}

/** Returns calibrated adc values.*/
float adcRead(void) {
    float sum = 0; // Sum of averaged adc values
    int adc_values_arr[N];
    for (int i = 0; i < N; i++) {
	   while(ADCSRA & (1 << ADSC));
       ADCSRA |= (1 << ADSC); // Start ADC conversion
       int ten_bit_value = ADCL + (ADCH * 256);
	   adc_values_arr[i] = ten_bit_value;
       sum += adc_values_arr[i];
    }
    calibrated_adc_value = floor((sum / 55.0) - OFFSET);
    return calibrated_adc_value;
}

/** @} */ // end of group1
