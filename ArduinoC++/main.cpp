#include <Arduino.h>
#include "LED.h"
#include "button.h"

#define LED_GREEN 12
#define LED_BLUE 13
#define BUTTON_PIN 2

void setup() {
}

void loop() {
  
 
  if (button.press()) {
    
    ledGreen.spegni();
    ledBlue.accendi();
  } else {
    
    ledGreen.accendi();
    ledBlue.spegni();
  }
}