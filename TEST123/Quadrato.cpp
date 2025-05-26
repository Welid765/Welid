#include <iostream>
#include "Rettangolo.h"
#include "Quadrato.h"

using namespace std;

Quadrato :: Quadrato(int lato) : Rettangolo(lato,lato,lato,lato)
{
}

int Quadrato :: CalcolaPerimetro()
{
   return 4 * l1;
}

void Quadrato :: Stampa()
{
    cout << "Area Quadrato :" << CalcolaArea() << endl;
    cout << "Perimetro Quadrato :" << CalcolaPerimetro() << endl;
}