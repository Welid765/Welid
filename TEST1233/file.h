#ifndef FILE_H
#define FILE_H

using namespace std;

class Rettangolo {

private : 
int base;
int altezza;

public:

Rettangolo(int base = 5 ,int altezza = 5);
/*int getBase();
int getAltezza();
*/
int CalcolaArea();

void Stampa();

};

#endif