#ifndef LED_H
#define LED_H

#include "pico/stdlib.h"

// Pin definitions
#define RED_LED_PIN 1

#define GREEN_LED_PIN 5

#define BLUE_LED_PIN 9


void initLed(uint ledPin);
void toggleLed(uint ledPin);
void toggleAllLeds(uint redPin, uint greenPin, uint bluePin);

#endif