#include "Rombo.h"
#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Rombo :: Rombo(int lato) : Quadrilatero(lato,lato,lato,lato) {

}

double Rombo:: CalcolaArea() 
{
    return (l1 * l1) / 2;
}


double Rombo:: CalcolaPerimetro()
{
    return (l1 * 4);
}


void Rombo :: Stampa() 
{
    cout << "Il valore del lato del rombo e': " << l1 << endl;
    cout << "Il valore dell'area del rombo e': " << CalcolaArea() << endl;
    cout << "Il valore del perimetro del rombo e': " << CalcolaPerimetro() << endl;
}