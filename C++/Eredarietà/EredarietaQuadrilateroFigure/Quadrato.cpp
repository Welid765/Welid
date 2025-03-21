#include "Quadrato.h"
#include "Rettangolo.h"
#include <iostream>
#include <cmath>

Quadrato :: Quadrato(int lato) : Rettangolo(lato,lato) 
{
   
}

double Quadrato :: CalcolaArea()
{

    return l1*l1;

}

double Quadrato :: CalcolaPerimetro()
{

return l1 * 4;

}
double Quadrato :: CalcolaDiagonale()
{

return  l1 * sqrt(2);

}

void Quadrato :: Stampa()
{
 cout << "Lato Quadrato " << l1 << endl;
 cout << "Area Quadrato: " << CalcolaArea() << endl;
 cout <<"Perimetro Quadrato : " << CalcolaPerimetro() << endl;
 cout <<"Diagonale Quadrato : " << CalcolaDiagonale() << endl;
}

