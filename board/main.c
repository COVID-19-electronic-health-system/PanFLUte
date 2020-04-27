#include "driver/led.h" 

int main(void) {
    ledInit(); 
    while(1) {
        idle_blink(500); // Blinks PanFLUte's on-board LED 
    }
    return 0;
}
