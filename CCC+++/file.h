#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
    private :
    int numeratore;
    int denominatore;
     
     public:

     Frazione(int x = 4,int y = 6);
     
     int getNum();
     int getDen();

     void Semplifica();
     void Stampa();

};

#endif