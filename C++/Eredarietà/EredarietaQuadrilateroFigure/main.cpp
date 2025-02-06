#include <iostream>
#include "Quadrilatero.h"
#include "Quadrato.h"
#include "Rettangolo.h"
#include "Rombo.h"

using namespace std;

int main() {
    Quadrilatero q1(2, 3, 4, 5);
    q1.Stampa();

    Rettangolo r1(6, 9);
    r1.SetColore(2);
    r1.Stampa();

    Quadrato s1(7);
    s1.Stampa();

    Rombo t1(8);
    t1.Stampa();

    return 0;
}
