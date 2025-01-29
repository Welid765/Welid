#include <iostream>
#include "Rettangolo.h"
#include "Equilatero.h"


using namespace std;

Rettangolo :: Rettangolo(int base,int altezza) :Equilatero(base,altezza,base,altezza)
{

}

void  Rettangolo :: Stampa()
{

cout << "L1 : " << L1 <<endl;
cout << "L2 : " << L2 << endl;
cout << "L3 : " << L3 << endl;
cout << "L4 : " << L4 << endl;
}