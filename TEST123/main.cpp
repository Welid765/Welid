#include <iostream>
#include "Rettangolo.h"
#include "Quadrato.h"

using namespace std;

int main()
{
    Rettangolo r1(5,6,7,8);
    r1.Stampa();

    Quadrato q1(5);
    q1.Stampa();
     

    return 0;
}
