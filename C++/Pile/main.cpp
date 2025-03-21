#include <iostream>
#include "file.h" 


int main()
{
    int base,altezza,a;
    int voti[3];

    Rettangolo r1;
   
    r1.SetBase(4);
    r1.SetAltezza(6);
    
    for(int i = 0; i < 3; i++)
    {
        cout << "Inserisci voti : " << endl;
        cin >> a;

        r1.SetVoti(a);
    }

    r1.Stampa();



return 0;
}