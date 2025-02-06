#include <iostream>
#include "File.h"
#include <string>
#include <cmath>

using namespace std;

Rettangolo :: Rettangolo(int parametro)
{
    this -> base = parametro;
}

Rettangolo :: Rettangolo(int base,int altezza)
{
  this -> base = base;
  this -> altezza = altezza;
}

double Rettangolo :: CalcolaArea() 
{

return base * altezza;

}

double Rettangolo :: CalcolaPerimetro()
{

return 2*(base + altezza);

}

double Rettangolo :: CalcolaDiagonale()
{

return sqrt(base*base + altezza*altezza);

}

string Rettangolo :: Nome()
{

return nome = "Haitem";

}

string Rettangolo :: Nome1()
{

return nome1 = "Welid";

}

void Rettangolo :: Stringhe()
{
   if(nome == nome1)
   {
        cout << "Sono uguali";
   }
   else
   {
        cout << "Sono diversi";
   }
}



void Rettangolo :: Stampa()
{


cout << "Base : " << altezza << endl;
cout << "Altezza : " << base << endl;

cout << "Area : " << CalcolaArea() << endl;
cout << "Perimetro : " << CalcolaPerimetro() << endl;
cout << "Diagonale " << CalcolaDiagonale() << endl;
cout << "Nome : " << Nome();
cout << "Nome1 :" << Nome1();
Stringhe();


}