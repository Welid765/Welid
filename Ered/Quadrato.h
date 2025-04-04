#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

using namespace std;

class Quadrato : public Rettangolo
{

    public:
    Quadrato(int lato);

    void Stampa();

};
#endif