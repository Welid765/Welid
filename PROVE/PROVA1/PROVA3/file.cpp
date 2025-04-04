#include <iostream>
#include "file.h"
#include <string.h>

using namespace std;

void Persona :: SetCose(int a,string b,int c)
{

 this->anno = a;
 this->sesso = b;
 this->numeroPreferito = c;
}

int Persona :: GetAnno()
{
return anno;
}


void Persona :: GetSesso()
{
cout << "Sesso : " << sesso << endl;
}


int Persona :: GetNumero()
{

return numeroPreferito;

}

int Persona :: CalcolaAnno()
{
 int aux = 0;
 
 aux = 2025 - anno;

 return aux;

}



void Persona :: Stampa()
{
  cout << "Anno : " << GetAnno() << endl;
  GetSesso();
  cout << "Numero : " << GetNumero() << endl;
  cout << "Anno di nascita : " << CalcolaAnno() << endl;

}