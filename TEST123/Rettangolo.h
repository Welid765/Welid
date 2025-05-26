#ifndef Rettangolo_H
#define Rettangolo_H

class Rettangolo 
{
 protected :
 int l1,l2,l3,l4;

 public : 
 Rettangolo(int l1,int l2,int l3,int l4);
 void getRettangolo();
 int CalcolaArea();
 int CalcolaPerimetro();

 void Stampa();
};

#endif
