 #include <iostream>
using namespace std;

 int main()
 {
  char operatore;
  int a,b;
 
  cout << "Inserisci il primo numero: \n";
  cin >> a;

  cout << "Inserisci il secondo numero: \n";
  cin >> b;

  cout << "Inserisci un operatore: \n";
  cin >> operatore;

  if(operatore == '+' )
  {
    int somma = a + b;
    cout << somma;
  }

  if(operatore == '-')
  {
    if(a > b)
    {
    int sottrazione = a - b;
     cout << sottrazione;
    }
    else
    {
     int sottrazione = b - a;
     cout << sottrazione;
    }
  }



  if(operatore == '*')
  {
    int moltiplicazione = a * b;
    cout << moltiplicazione;
  }

  if(operatore == '/')
  {
    float divisione = a/b;
    cout << divisione;
  }



  return 0;
 }
