
#include "LED.h"

LED :: LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
      stato = 0;
    }

     void LED :: accendi() {
      digitalWrite(pin, HIGH);
      stato = 1;
    }

    void LED :: spegni() {
      digitalWrite(pin, LOW);
      stato = 0;
    }




