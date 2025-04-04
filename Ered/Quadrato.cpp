#include <iostream>
#include "Rettangolo.h"
#include "Quadrato.h"

using namespace std;

Quadrato :: Quadrato(int lato) : Rettangolo(lato,lato)
{

}

void Quadrato :: Stampa()
{

    cout << "Area Quadrato : " << CalcolaArea() << endl;

}



