#ifndef MPX5100_H
#define MPX5100_H

#include "adc.h"
#define MAX_PRESSURE 120.0 // Pressure in KPa

float pascal, adc_val;
void getPascal(void);

#endif // MPX5100_H
