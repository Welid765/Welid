#ifndef RETTANGOLO_H
#define RETTANGOLO_H

class Rettangolo 
{
protected : 
int l1,l2,l3,l4;

public :
Rettangolo(int l1,int l2,int l3,int l4);
void getLati();
int CalcolaArea();

void Stampa();
};
#endif