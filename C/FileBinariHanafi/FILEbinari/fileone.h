#ifndef FILEONE_H
#define FILEONE_H

using namespace std;

class Rettangolo  
{
 private :
 int base;
 int altezza;

 public:

Rettangolo(int base = 7,int altezza = 8);

 void SetRettangolo(int b,int h);
 int getBase();
 int getAltezza();

 int CalcolaArea();
 int CalcolaPerimetro();

 void Stampa();
};

#endif
