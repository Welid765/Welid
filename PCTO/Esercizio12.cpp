#include <iostream>
#include <cmath> 

using namespace std;

int main()
{

  char a;
  char b;

  cout << "Inserisci un valore : " << endl;
  cin >> a;

  if(a != 'F' && a != 'f')
  {
    cout << "Output Errato : " << endl;
    cout << "Rinserisci un valore : " << endl;
    cin >> a;
  }
    
    cout << "Se vuoi l'inserimento in potenza, inserisci un valore : " << endl;
    cin >> b;
    
    if(b == 'F' || b == 'f')
    {
      cout << " Chiuso " << endl;
      return 0;
    }
    else
    {
      int elevato = b - '0';
      int valore = a - '0';
      int risultato = pow(elevato, valore);  // b elevato alla a
      cout << "Il valore di " << a << " elevato alla potenza di " << elevato << " e' : " << risultato << endl;
    }
    
    if(b == '\n')
    {
      int valore = a - '0';
      int quadrato = valore * valore;
      cout << "Il quadrato di " << a << " e' : " << quadrato << endl;
    }

  return 0;
}











