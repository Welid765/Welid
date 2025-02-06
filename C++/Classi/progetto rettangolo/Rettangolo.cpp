#include <iostream>
#include <cmath>
#include "Rettangolo.h"

using namespace std;


Rettangolo :: Rettangolo()
{
    base = 0;
    altezza = 0;
}

Rettangolo :: Rettangolo(double parametro)
{
    base = parametro;
    altezza = parametro;
}

Rettangolo :: Rettangolo(double base,double altezza)
{
    this -> base = base;
    this -> altezza = altezza;
}

Rettangolo :: ~Rettangolo()
{
cout << "hai chiamato distruttore :"  << endl;
}

double Rettangolo :: CalcolaPerimetro()
{
    return base*altezza;
}

double Rettangolo :: CalcolaArea()
{
return 2*(base + altezza);
}

double Rettangolo :: CalcolaDiagonale()
{
    return sqrt(base*base + altezza*altezza);
}

void Rettangolo :: Stampa()
{
    cout << "base:" << base << endl;
    cout << "altezza:" << altezza << endl;
    cout << "Perimetro" <<  CalcolaPerimetro() << endl;
    cout << "Area:" << CalcolaArea() << endl;
    cout << "Diagonale : "<<  CalcolaDiagonale()  << endl;
}




