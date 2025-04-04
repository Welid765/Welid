#ifndef FILE_H
#define FILE_H
#include <string>

using namespace std;

class Persona
{
    private :
    int anno;
    string sesso;
    int numeroPreferito;

      public:
      void SetCose(int anno = 2007,string sesso = "Maschio",int numeroPreferito = 24);
      int GetAnno();
      void GetSesso();
      int GetNumero();
      int CalcolaAnno();

      void Stampa();

};

#endif