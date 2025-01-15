#include <iostream>
#include <cmath>

using namespace std;


class Rettangolo {

private:
int base;
int altezza;

public :

Rettangolo() 
{  
    base = 0; 
    altezza = 0;
} 


Rettangolo(double parametro)
{
    base = parametro;
    altezza = parametro;
}

Rettangolo(double base,double altezza)
{
    this -> base = base;
    this -> altezza = altezza;
}


~Rettangolo() 
{ 
   cout << "hai chiamato distruttore" << endl; 
}


double CalcolaPerimetro()
{
    return base*altezza;
}

double CalcolaArea()
{
    return 2*(base + altezza);
}

double CalcolaDiagonale()
{
    return sqrt(base + altezza);
}

void Stampa()
{
    cout << "base:" << base << endl;
    cout << "altezza:" << altezza << endl;
    cout << "Perimetro" <<  CalcolaPerimetro() << endl;
    cout << "Area:" << CalcolaArea() << endl;
    cout << "Diagonale : "<<  CalcolaDiagonale()  << endl;
}
};

int main()
{

    double base,altezza;

    cout << "Inserisci la base" << endl;
    cin >> base;

    cout << "Inserisci l'altezza" << endl;
    cin >> altezza;

     Rettangolo r1(base,altezza);
    
     r1.Stampa();
    
    
    return 0;
}
