#include <iostream>
#include "file.h"

using namespace std;

Rettangolo :: Rettangolo (int base,int altezza)
{
  this ->base = base;
  this ->altezza = altezza;
}

 /*int Rettangolo :: getBase()
{
return base;
}

int Rettangolo :: getAltezza()
{
    return altezza;
}
    */

int Rettangolo :: CalcolaArea()
{
return base * altezza;
}

void Rettangolo :: Stampa()
{
    cout << base << endl;
    cout << altezza << endl;
    cout << "L'area del rettangolo e : " << CalcolaArea() << endl;
}