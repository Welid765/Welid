#include <iostream>
#include "Rettangolo.h"

using namespace std;

Rettangolo :: Rettangolo(int a,int b,int c,int d)
{
    this->l1 = a;
    this->l2 = b;
    this->l3 = c;
    this->l4 = d;
}

void Rettangolo :: getLati()
{

    cout << l1 << l2 << l3 << l4 << endl;
}

int Rettangolo :: CalcolaArea()
{
    return l1*l2;
}

void Rettangolo :: Stampa()
{

getLati();
cout << "Area : " << CalcolaArea() << endl;

}