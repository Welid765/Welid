#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main()
{

    double base,altezza;

    cout << "Inserisci la base" << endl;
    cin >> base;
    cout << "Inserisci l'altezza " << endl;
    cin >> altezza;

     Rettangolo r1 (base,altezza);

    r1.Stampa();

    return 0;
}




