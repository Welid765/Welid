#ifndef QUADRATO_H
#define QUADRATO_H
#include "quadrilatero.h"

using namespace std;

class Quadrato : public Quadrilatero
{
    public:
    Quadrato(int base);

    double CalcolaArea();

    void Stampa();

};
#endif
