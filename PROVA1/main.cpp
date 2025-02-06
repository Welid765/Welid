#include <iostream>
#include "file.h"

using namespace std;

int main()
{

  Studente r1;

  string nome,cognome;

  cout << "Inserisci il Nome : " << endl;
  cin >> nome;

  cout << "Inserisci il Cognome : " << endl;
  cin >> cognome;
  
  r1.SetNome(nome);
  r1.SetCognome(cognome);

  r1.Stampa();

}