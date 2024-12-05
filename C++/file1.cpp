#include <iostream>
using namespace std;

class Rettangolo {
    public : 
     int base;
     int altezza;

     double AreaRettangolo()
     {
      return base * altezza;
     }
     
     double PerimetroRettangolo()
     {
      return 2*(base + altezza);
     }     


     void Stampa() {
      
      cout << "Area : " << AreaRettangolo() << endl;
      cout << "Perimetro  : " << PerimetroRettangolo() << endl;
     }
};
    

int main()
{
    Rettangolo r1,r2;

      r1.base = 10;
      r1.altezza = 10;

     r2.base = 5;
     r2.altezza = 5;

     r1.AreaRettangolo();
     r1.PerimetroRettangolo();
     r2.AreaRettangolo();
     r2.PerimetroRettangolo();
     

   r1.Stampa();
   r2.Stampa();
  
    
    

return 0;
}
