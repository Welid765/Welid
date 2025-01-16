#ifndef button_H
#define button_H

class Button {
  private:
    int pin;
    bool stato; 

  public:

    Button(int p);
    
    bool press();
    
};
#endif