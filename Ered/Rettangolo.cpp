#include <iostream>
#include "Rettangolo.h"

using namespace std;

Rettangolo :: Rettangolo(int base,int altezza)
{
    this->base = base;
    this->altezza = altezza;
}

void Rettangolo :: GetLati()
{
  cout <<  base << altezza << endl; 
}

int Rettangolo :: CalcolaArea()
{
    return base * altezza;
}

void Rettangolo :: Stampa()
{

GetLati();
cout << "Area Rettangolo : " << CalcolaArea() << endl;

}