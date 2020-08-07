#include "../driver/adc.h"




/** @defgroup group1 TinyADC Library
 *  This is a minimal ADC Library with init and read functions only.
 *  @{
 */
 
/** @brief class C1 in group 1 */

void adcInit(void) { 
  /// Enables ADC.
  ADCSRA = (1 << ADEN) | (1 << ADSC);
}

float adcRead(void) {
    /// Returns calibrated adc values. 
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

