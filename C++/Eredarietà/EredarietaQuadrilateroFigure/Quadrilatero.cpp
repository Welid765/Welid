
#include <iostream>
#include "Quadrilatero.h"



Quadrilatero :: Quadrilatero(int l1,int l2,int l3,int l4)
{
   
    this -> l1 = l1;
    this -> l2 = l2;
    this -> l3 = l3;
    this -> l4 = l4;

}

 void Quadrilatero :: SetLati(int x,int y, int a,int b)
  {

     l1 = x;
     l2 = y;
     l3 = a;
     l4 = b;


}

int Quadrilatero :: GetLati()
{
    return l1,l2,l3,l4;
}

double Quadrilatero :: CalcolaPerimetro()
{

    return l1 + l2 + l3 + l4;

}

void Quadrilatero :: Stampa()
{
    cout << "Lati del Quadrilatero : " << GetLati();
    cout << "Perimetro Quadrilatero : " << CalcolaPerimetro() << endl;

}







