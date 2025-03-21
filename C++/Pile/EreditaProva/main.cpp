#include <iostream>
#include "quadrilatero.h"
#include "Quadrato.h"

using namespace std;

int main()
{

    Quadrilatero q1(1,1,1,1);
    q1.SetLati(); 

    q1.Stampa();

    Quadrato r1(4);
    r1.Stampa();

    return 0;
}