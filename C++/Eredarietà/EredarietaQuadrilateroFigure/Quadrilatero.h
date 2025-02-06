#ifndef Quadrilatero_H
#define Quadrilatero_H


using namespace std;

class Quadrilatero
{
  protected :
  int l1,l2,l3,l4;

  public:

  Quadrilatero(int l1,int l2,int l3,int l4);
  
  void SetLati(int l1 = 5,int l2 = 5,int l3 = 7,int l4 = 9); 
  int GetLati();
  double CalcolaPerimetro();

  void Stampa();


};

#endif