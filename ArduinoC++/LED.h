#ifndef LED_H
#define LED_H

class LED {
  private:
    int pin;
    int stato;

  public:
    LED(int p);
    

    void accendi();

    void spegni();
           
};

#endif