#include <stdio.h>
#include "stdlib.h"
#include "pico/stdlib.h"
#include "LED.h"


int main() {

        initLed(RED_LED_PIN);
        initLed(GREEN_LED_PIN);
        initLed(BLUE_LED_PIN);

        while (true){
            //////////
            toggleLed(RED_LED_PIN);
            sleep_ms(1000);
            toggleLed(RED_LED_PIN);
            sleep_ms(200);
            /////////
            toggleLed(GREEN_LED_PIN);
            sleep_ms(1000);
            toggleLed(GREEN_LED_PIN);
            sleep_ms(200);
            /////////
            toggleLed(BLUE_LED_PIN);
            sleep_ms(1000);
            toggleLed(BLUE_LED_PIN);
            sleep_ms(200);
            /////////
            toggleAllLeds(RED_LED_PIN, GREEN_LED_PIN, BLUE_LED_PIN);
            sleep_ms(2000);
            toggleAllLeds(RED_LED_PIN, GREEN_LED_PIN, BLUE_LED_PIN);
            sleep_ms(5000);
        }
    
}