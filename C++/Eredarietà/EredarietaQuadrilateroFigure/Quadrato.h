#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

class Quadrato : public Rettangolo
{
  
  public : 
  
  Quadrato(int lato);
  double CalcolaArea();
  double CalcolaPerimetro();
  double CalcolaDiagonale();

  void Stampa();

};

#endif