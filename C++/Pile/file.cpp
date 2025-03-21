#include <iostream>
#include "file.h"

using namespace std;

void Rettangolo::SetBase(int base)
{
    this ->base = base;
}

void Rettangolo:: SetAltezza(int altezza)
{
    this -> altezza = altezza;
}

void Rettangolo :: SetVoti(int x)
{
    for(int i = 0; i < 3;i++)
     {
        this->voti[i] = x;
     }
}

int Rettangolo :: GetBase() 
{
    return base;
}

int Rettangolo :: GetAltezza()
{
    return altezza;
}

int Rettangolo :: GetVoti() 
{
    return voti;
}

int Rettangolo :: AreaRettangolo()
{
    return base * altezza;
}

int Rettangolo :: PerimetroRettangolo()
{
    return 2*(base + altezza);
}

float Rettangolo :: CalcolaMedia()
{
    int somma = 0;

    for(int i = 0; i < 3;i++)
    {
       somma = somma + voti[i];
    }
    float media = (float) somma / 3;
    return media;
}

int Rettangolo :: Maggiore() {
    int Max = voti[0];

    for(int i = 0; i < 3;i++)
    {
        if(voti[i] > Max)
        {
            Max = voti[i];
        }
    }
    return Max;
}

void Rettangolo :: Stampa()
{
    cout << "Base : " << GetBase() << endl;
    cout << "Altezza : " << GetAltezza() << endl;
    cout << "Area Rettangolo : " << AreaRettangolo() << endl;
    cout << "Area Perimetro : " << PerimetroRettangolo() << endl;
    float Media =  CalcolaMedia();
    cout << "media : " << Media << endl; 
    int Massimo = Maggiore();
    cout << "voto maggiore : "  << Massimo  << endl;
}

