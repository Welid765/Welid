#ifndef FILE_H
#define FILE_H

using namespace std;

class Rettangolo
{
    private:
    int base;
    int altezza;
    int voti[3];
   

    public: 
    void SetBase(int base);
    void SetAltezza(int altezza);
    void SetVoti(int );
     int GetBase();
     int GetAltezza();
     int GetVoti();
     int AreaRettangolo();
     int  PerimetroRettangolo();
     float CalcolaMedia();
     int Maggiore();

     void Stampa();

};

#endif

