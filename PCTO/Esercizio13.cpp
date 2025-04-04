#include <iostream>

using namespace std;

int main()
{
    int b,c;

    cout << "Inserisci il primo numero : " << endl;
    cin >> b;
    cout << "Inserisci il secondo numero: " << endl;
    cin >> c;

    char a;

    while (a != 'F')
    {
        cout << "Scegli l'operazione tra +, -, *, / o F per uscire : " << endl;
        cout << "Inserisci un operatore : " << endl;
        cin >> a;

        if (a == '+')
        {
            int somma = b + c;
            cout << somma << endl;
        }

        if (a == '-')
        {
            int differenza = b - c;
            cout << differenza <<endl;
        }

        if (a == '*')
        {
            int prodotto = b * c;
            cout << prodotto << endl;
        }

        if (a == '/')
        {
            float divisione = (float) b / c;
            cout << divisione << endl;
        }

        if (a != '+' && a != '-' && a != '*' && a != '/' && a != 'F')
        {
            cout << "Operazione non valida" << endl;
        }
    }
    cout << "Chiusura del programma" << endl;
    return 0;
}
