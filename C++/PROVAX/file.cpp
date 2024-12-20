#include <iostream>
using namespace std;

class Persona
{
    private : 
    int eta;
    int anno;

    public:
    void setEta(double eta)
    {
       this -> eta = eta;   
    }  
    void setAnno(double anno)
    {
       this -> anno = anno;   
    } 

    double getEta()
    {
       return eta;
    }  
    double getAnno()
    {
       return anno; 
    }  
    
    double Nascita()
    {
        return anno - eta;
    }

    void Stampa()
    {
        double Eta = getEta();
        double Anno = getAnno();
         cout << " anno : " << Anno << endl; 
        cout << " eta : " << Eta << endl;  
        cout << "Anno di Nascita : " << Nascita();
    }
};


int main()
{
   Persona r1;

   double anno,eta;

   cout << "Inserisci l'anno: " << endl;
   cin >> anno;

   cout << "Inserisci l'eta : " << endl;
   cin >> eta;

   

   r1.setAnno(2024);
   r1.setEta(17);

   r1.Stampa();

   return 0;

}
