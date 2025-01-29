#include <iostream> 

using namespace std;

class Saluto {

public : 
string nome = "Welid";
string cognome = "Hanafi";

  void  Ciao()
     {
          cout << "Evvai " << endl;
     }  

};

class Parola : public Saluto
{
       
};

int main()
{
 
 Parola r1;
  cout << "Nome : " << r1.nome << endl;
  cout << "Cognome: " << r1.cognome << endl;
  
  r1.Ciao();

return 0;
}