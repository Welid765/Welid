#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include "Quadrilatero.h"

class Rettangolo : public Quadrilatero 
{
    private:
    int colore;
    
    public :
    Rettangolo(int base,int altezza);
    void SetColore(int colore);
    int GetColore();
    double CalcolaArea();
    double CalcolaPerimetro();
    double CalcolaDiagonale();

    void Stampa();


};

#endif