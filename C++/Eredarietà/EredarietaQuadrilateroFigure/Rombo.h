#ifndef ROMBO_H
#define ROMBO_H
#include "Rombo.h"
#include "Quadrilatero.h"

class Rombo : public Quadrilatero {
    
    public:

    Rombo(int lato);
    double CalcolaArea();
    double CalcolaPerimetro();

    void Stampa();
};

#endif