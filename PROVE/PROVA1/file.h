#ifndef file_H
#define file_H

using namespace std;

class Studente {

    private:
    string nome;
    string cognome;
    

    public :

    void SetNome(string nome);

    string GetNome();

    void SetCognome(string cognome);

    string GetCognome();

    float MediaStudente();

    void Stampa();

};

#endif
  