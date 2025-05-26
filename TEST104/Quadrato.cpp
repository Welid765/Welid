#include <iostream>
#include "Quadrato.h"
#include "Rettangolo.h"

using namespace std;

Quadrato :: Quadrato (int lato) : Rettangolo(lato,lato,lato,lato)
{
}

int Quadrato :: CalcolaArea()
{
   return 2*(l1 +l2);
}

void Quadrato :: Stampa()
{
 cout << "Area Quadrato : " << CalcolaArea() << endl;
}