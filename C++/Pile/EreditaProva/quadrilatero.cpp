#include <iostream>
#include "quadrilatero.h"

using namespace std;

Quadrilatero :: Quadrilatero(int l1,int l2,int l3,int l4)
{
  this -> l1 = l1;
  this -> l2 = l2;
  this -> l3 = l3;
  this -> l4 = l4;
}

void Quadrilatero :: SetLati(int a,int b,int c ,int d)
{
  this -> l1 = a;
  this -> l2 = b;
  this -> l3 = c;
  this -> l4 = d;
}

void Quadrilatero :: GetLati()
{
    cout << l1 << l2 << l3 << l4 << endl;
}

double Quadrilatero :: CalcolaPerimetro()
{
    return l1 + l2 + l3 + l4;
}

void Quadrilatero :: Stampa()
{
     GetLati();
     cout << "Perimetro : " << CalcolaPerimetro() << endl;
}
