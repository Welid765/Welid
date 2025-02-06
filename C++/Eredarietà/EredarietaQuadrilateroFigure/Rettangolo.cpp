#include "Rettangolo.h"
#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Rettangolo :: Rettangolo(int base,int altezza) : Quadrilatero(base,altezza,base,altezza)
{
      colore = 0;
    
}

void Rettangolo :: SetColore(int colore)
{

this->colore = colore;

}

int Rettangolo :: GetColore()
{

return colore;

}

double Rettangolo :: CalcolaArea()
{

    return l1*l2;

}

double Rettangolo :: CalcolaPerimetro()
{

    return 2*(l1 + l2);

}

double Rettangolo :: CalcolaDiagonale()
{

return sqrt(l1*l3+ l2*l4);

}

void Rettangolo :: Stampa()
{ 

    cout << "Base Rettangolo : " << l1 << endl;
    cout << "Altezza  Rettangolo : " << l2 << endl;
    int  Colore = GetColore();
    cout << "Colore Rettangolo : " << Colore << endl;
    cout << "Area Rettangolo : " << CalcolaArea() << endl;
    cout <<"Perimetro Rettangolo : " << CalcolaPerimetro() << endl;
    cout <<"Diagonale Rettangolo : " <<CalcolaDiagonale() << endl;

}