//Welid Hanafi 4H 

// Classe LED
class LED {
  private:
    int pin;    // Pin del LED
    int stato;  // Stato attuale del LED (1 = acceso, 0 = spento)


  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
      stato = 0; // Il LED parte spento
    }


    // Metodo per accendere il LED
    void accendi() {
      digitalWrite(pin, HIGH);
      stato = 1;
    }


    // Metodo per spegnere il LED
    void spegni() {
      digitalWrite(pin, LOW);
      stato = 0;
    }


    // Metodo per invertire lo stato del LED
    void inverti() {
      if (stato == 1) {
        spegni();
      } else {
        accendi();
      }
    }


    // Metodo per far lampeggiare il LED
    void lampeggio(int nrLampeggi) {
      for (int i = 0; i < nrLampeggi; i++) {
        accendi();
        delay(500); // Intervallo di 500 ms
        spegni();
        delay(500); // Intervallo di 500 ms
      }
    }


    // Metodo di test per verificare le funzionalità del LED
    void test(int numeroTest) {
      for (int i = 0; i < numeroTest; i++) {
        accendi();
        delay(3000);
        spegni();
        delay(300);
        inverti();
        delay(3000);
        lampeggio(3); // Lampeggia 3 volte
        delay(3000);
      }
    }
};


// Crea un oggetto LED sulla porta 11
LED led(11);


void setup() {
  // Non c'è nulla da fare qui
}


void loop() {
  led.test(1); // Esegui il test per 1 ciclo
  delay(5000);
}


