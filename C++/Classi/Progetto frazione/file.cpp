#include <iostream>
#include "file.h"

using namespace std;

 Frazione :: Frazione(int x , int y)
{
    this -> numeratore = x;
    this -> denominatore = y;
}

int Frazione :: getNum()
{
    return numeratore;
}

int Frazione :: getDen()
{
    return denominatore;
}
 void Frazione :: Semplifica()
{
    int a = numeratore;
    int b = denominatore;

   if(b != 0)
   {
    int resto = a % b;
    a = b;
    b = resto;
   }

   int MCD = a;
   int numeratore = numeratore / MCD;
   int denominatore = denominatore / MCD;
}

void Frazione :: Stampa()
{
    numeratore = getNum();
    denominatore = getDen();
    cout << "Numeratore : " << numeratore << endl;
    cout << "Denominatore :" << denominatore << endl;
    cout << numeratore << "/" << denominatore << endl;
}
