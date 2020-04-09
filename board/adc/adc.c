#include "../driver/adc.h"

void adcInit(void) { 
  /* Enable ADC and start conversion */
  ADCSRA |= ((1 << ADEN) | (1 << ADSC));
}
