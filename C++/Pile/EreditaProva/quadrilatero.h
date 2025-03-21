#ifndef QUADRILATERO_H
#define QUADRILATERO_H

using namespace std;

class Quadrilatero {
 protected :
 int l1,l2,l3,l4;
 public :

 Quadrilatero(int l1,int l2,int l3,int l4);
 void SetLati(int l1 = 7,int l2 = 2,int l3 = 5 , int l4 = 9);
 void GetLati();

 double CalcolaPerimetro();

 void Stampa();

};
#endif