#ifndef RETTANGOLO_H
#define RETTANGOLO_H

using namespace std;
class Rettangolo 
{
   protected : 
   int base;
   int altezza; 
   public :

   Rettangolo(int base,int altezza);
   void GetLati();
   int CalcolaArea();
   void Stampa();
};
#endif 