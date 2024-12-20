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
        return base * altezza;
    }
    double CalcolaArea()
    {
        return 2*(base + altezza);
    }

    void stampa()
    {
        double Base = getBase();
        double Altezza = getAltezza();
        cout << "Base : " << Base << endl;
         cout << "Altezza: " << Altezza  << endl;
        cout << "Perimetro : " << CalcolaPerimetro() << endl;
         cout << "Area :" << CalcolaArea() << endl;
    }
};
     int main()
     { 
            Rettangolo r1;
         
         double altezza,base;

            cout << " base : " << endl;
            cin >> base;
            
            cout << " altezza: " << endl;
            cin >> altezza;
           
           r1.setBase(base);
           r1.setAltezza(altezza);

           r1.stampa();
           
     }


        
    


    









