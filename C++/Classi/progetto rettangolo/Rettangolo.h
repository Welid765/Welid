#ifndef Rettangolo_H
#define Rettangolo_H

class Rettangolo {

private : 
int base;
int altezza;

public:
Rettangolo();

Rettangolo (double parametro);

Rettangolo(double base,double altezza);
~Rettangolo();


double CalcolaPerimetro();

double CalcolaArea();

double CalcolaDiagonale();

void Stampa();

};

#endif