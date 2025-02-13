#include <iostream>
#include "file.h"
#include <string>

void Studente :: SetNome(string nome)
{
   this -> nome = nome;
}

string Studente :: GetNome()
{
return nome;
}

void Studente :: SetCognome(string cognome)
{
    this -> cognome = cognome;
}

string Studente :: GetCognome()
{
    return cognome;
}
     
float Studente :: MediaStudente()
{
int somma = 0,voto = 0;
for(int i = 0; i < 3; i++)
{
    cout << "Inserisci un voto : " << endl;
    cin >> voto;
   somma = somma +  voto;

 }
float media = (float) somma / 3;
return media;
}


void Studente :: Stampa()
{
    string Nome = GetNome();
    string Cognome = GetCognome();
    cout << "Nome : " << Nome << endl;
    cout << "Cognome : " << Cognome << endl;
    float Media = MediaStudente();
    cout << "Media : " << Media << endl;  
    
    
}







