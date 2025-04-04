#include <iostream>
using namespace std;

int main()
{

   char a;

    cout << "Inserisci un valore o la lettera F" << endl;
    cin >> a;

    if(a == 'F' || a == 'f)
    {
        cout << "Hai inserito la lettera F,Chiusura del file" << endl;
        return 0;
    }
    else
    {
     int valore = a - '0';
     int quadrato = valore * valore;
     cout << "Il quadrato è : " << quadrato  << endl;
    }

return 0;
}


  

