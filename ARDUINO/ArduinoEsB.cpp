//Welid Hanafi 4H 

class LED {
  private:
    int pin;
    int stato;

  public:
    LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
      stato = 0;
    }

    void accendi() {
      digitalWrite(pin, HIGH);
      stato = 1;
    }

    void spegni() {
      digitalWrite(pin, LOW);
      stato = 0;
    }
};

class Button {
  private:
    int pin;
    bool stato; // Stato attuale del pulsante (true = premuto, false = non premuto)

  public:
  // Costruttore per inizializzare il pulsante con un pin specifico
    Button(int p) {
      pin = p;
      pinMode(pin, INPUT_PULLUP);
      stato = false;
    }
     // Funzione per controllare se il pulsante è premuto
    bool press() {
      stato = (digitalRead(pin) == LOW);
      return stato;
    }
};

#define LED_GREEN 12
#define LED_BLUE 13
#define BUTTON_PIN 2

LED ledGreen(LED_GREEN);
LED ledBlue(LED_BLUE);
Button button(BUTTON_PIN);

void setup() {
}

void loop() {
  
  // Controlla se il pulsante è premuto
  if (button.press()) {
    // Se premuto, spegne il LED verde e accende il LED blu
    ledGreen.spegni();
    ledBlue.accendi();
  } else {
    // Se non premuto, accende il LED verde e spegne il LED blu
    ledGreen.accendi();
    ledBlue.spegni();
  }
}
