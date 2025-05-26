#include <iostream>
#include "fileone.h"

using namespace std;

Rettangolo :: Rettangolo(int x,int y)
{
    this -> base = x;
    this -> altezza = y;
}

void Rettangolo :: SetRettangolo(int base,int altezza)
{
  this -> base = base;
  this -> altezza = altezza;
}

int Rettangolo :: getBase()
{
 return base;
}

int Rettangolo :: getAltezza()
{
 return altezza;
}

int Rettangolo :: CalcolaArea()
{
    return base * altezza;
}

int Rettangolo :: CalcolaPerimetro()
{
    return 2*(base + altezza);
}

void Rettangolo :: Stampa()
{
    cout << "Base : " << base << endl;
    cout << "Altezza :" << altezza << endl;
    cout << "Area Rettangolo :" << CalcolaArea() << endl;
    cout << "Perimetro Rettangolo :" << CalcolaPerimetro() << endl;
}


