#include "mbed.h"
#include "TTU_X031.h"
#include "SevenSegmentLED.h"
#include "TextLCD.h"

int main()
{
    while(1)
    {
        // LED0 blinks on and off every 1 second
        led0 = 1;
        wait(1);
        led0 = 0;
        wait(1);
    }
}
