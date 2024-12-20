
#include <iostream>
using namespace std;

class Rettangolo
{
    private:
    int base;
    int altezza;

     public :
     void setBase(double base) 
     {
        this -> base = base;
     }

     void setAltezza(double altezza)
     {
        this -> altezza = altezza;
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
        return base*altezza;
     }
     double CalcolaArea()
     {
        return 2*(base + altezza);
     }

     void Stampa()
     {
        double base = getBase();
        double altezza = getAltezza();
         cout << " base : " << base << endl;
         cout << "altezza :" << altezza << endl;
         cout << "Perimetro :" << CalcolaPerimetro() << endl;
         cout << "Area:" <<  CalcolaArea() << endl;
     }
    };

    int main()
    {
        Rettangolo r1;

        double base,altezza;

        cout << "la base : " << endl;
        cin >> base;
        cout << "l'altezza : " << endl;
        cin >> altezza;

        r1.setBase(base);
        r1.setAltezza(altezza);

        r1.Stampa();

        return 0;
    }
