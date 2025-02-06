#include <iostream>
#include <cmath>
using namespace std;

class Persona
{
    private : 
    int base;
    int altezza;

    public : 
     void setBase(double n)
     {
         base = n;
     }

     void setAltezza(double n)
     {
         altezza = n;
     }

     double getBase()
     {
        return base;
     }
     double getAltezza()
     {
       return altezza;
     }
    
    double CalcolaPerimetro()
    {
        return 2*(base + altezza);
    }
    double CalcolaArea()
    {
          return base*altezza;
    }

    double CalcolaDiagonale()
    {
         return sqrt(base*base + altezza * altezza);
    }

    void Stampa()
    {
        double AltezzaRet = getAltezza();
        double BaseRet = getBase();
        cout << "Altezza : " << AltezzaRet <<endl;
        cout << "Base : " << BaseRet << endl;
        cout << "Perimetro : " << CalcolaPerimetro() << endl;
        cout << "Area : " << CalcolaArea() << endl;
        cout << "Diagonale : " << CalcolaDiagonale() << endl;
   }
};


int main()
{
    Persona r1;
    double altezza,base;

    cout << "Inserisci l'altezza : " << endl;
    cin >> altezza;

    cout << "Inserisci la base : " << endl;
    cin >> base;

    r1.setAltezza(base);
    r1.setBase(altezza);

    r1.Stampa();
    
return 0;
}


        
    


    








