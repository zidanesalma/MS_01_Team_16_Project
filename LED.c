#include "LED.h"

void initLed(uint ledPin){
    gpio_init(ledPin);
    gpio_set_dir(ledPin, GPIO_OUT);
    if(ledPin == BLUE_LED_PIN)
        gpio_put(ledPin, 1);
    else
        gpio_put(ledPin, 0);
}

void toggleLed(uint ledPin){
    gpio_put(ledPin, !gpio_get(ledPin));

}

void toggleAllLeds(uint redPin, uint greenPin, uint bluePin){
    gpio_put(redPin, !gpio_get(redPin));
    gpio_put(greenPin, !gpio_get(greenPin));
    gpio_put(bluePin, !gpio_get(bluePin));

}
