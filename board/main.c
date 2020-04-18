#include "driver/led.h" 

int main(void) {
    ledInit(); 
    while(1) {
        idle_blink(); // Blinks PanFLUte's on board   
    }
    return 0;
}
