#include <iostream>
#include "Quadrato.h"
#include "quadrilatero.h"

using namespace std;

Quadrato :: Quadrato(int lato) : Quadrilatero(lato,lato,lato,lato)
{

}

double Quadrato :: CalcolaArea()
{
    return l1 * l1;
}

void Quadrato :: Stampa()
{
    cout << "Area Quadrato : " << CalcolaArea() << endl;
}
