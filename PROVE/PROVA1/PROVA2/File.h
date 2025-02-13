#ifndef File_H
#define File_H
#include <string>

using namespace std;

class Rettangolo 
{
 private:

 int base;
 int altezza;
 string nome;
 string nome1;

 public:

 Rettangolo(int parametro);
 Rettangolo(int base,int altezza);

 double CalcolaArea();
 double CalcolaPerimetro();
 double CalcolaDiagonale();
 string Nome();
 string Nome1();
 void Stringhe();

 void Stampa();

};
#endif
