#include <iostream>
#include <string>

using namespace std;

class Persona
{
  private : 

  public :

  string nome = "Kevin";

};

int main() 
{
  string nome2;

  Persona r1;

  cout << "Inserisci il nome : " << endl;
  cin >> nome2;

  if(r1.nome == nome2)
  {
     cout << "Sono Uguali" << endl;
  }
  else
  {
     cout << "Sono Diversi" << endl;
  }

  nome2 = r1.nome;
  cout << "Nome 1 copiato in nome 2 : "  << nome2;
}

