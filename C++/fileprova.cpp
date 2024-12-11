#include <iostream>
using namespace std;

class Rettangolo {
private :
    int Base;
    int Altezza;

    public:
    void getbase(){
        cin >> Base;
   }
    void getAltezza(){
        cin >> Altezza;
    }
    double AreaRettangolo()
    {
        return Base*Altezza;
    }

    double PerimetroRettngolo()
    {
       return 2*(Base + Altezza);
    }
}; 

int main(){
    Rettangolo r1,r2;
    r1.base = 10;
    r1.altezza = 20;
    r2.base = 20;
    r2.altezza = 30;
    r1.calcolaPerimetro();
    r2.calcolaPerimetro();
    r1.calcolaArea();
    r2.calcolaArea();
    cout << "il perimetro e l'area del rettangolo 1 sono:" << endl;
    r1.stampa();
    cout << "il perimetro e l'area del rettangolo 2 sono:" << endl;
    r2.stampa();
    return 0;
}