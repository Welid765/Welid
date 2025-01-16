#include "button.h"

 Button :: Button(int p) {
      pin = p;
      pinMode(pin, INPUT_PULLUP);
      stato = false;
    }
    
    bool Button :: press() {
      stato = (digitalRead(pin) == LOW);
      return stato;
    }
