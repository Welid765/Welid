#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

class Quadrato : public Rettangolo
{

public :
Quadrato(int lato = 4);
int CalcolaArea();

void Stampa();

};
#endif
 