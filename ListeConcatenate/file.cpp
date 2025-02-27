#include <iostream>

using namespace std;

typedef struct  Nodo
{
int info;
Nodo *next;
} Nodo;

void inserimentoaTesta(Nodo *& s);
void StampaInserimento(Nodo*s);

int main()
{
Nodo *s = nullptr;

inserimentoaTesta(s);
StampaInserimento(s);




return 0;
}

void inserimentoaTesta(Nodo*& s)
{
  Nodo *p = new Nodo;
  p -> info = 3;
  p -> next = s;
  s = p;
}

void StampaInserimento(Nodo*s)
 { 
    Nodo *aux = s;   //ricordati che aux punta  adove punta la testa(s) cioe a 3 

     while(aux != nullptr)
     {
        cout <<  aux -> info << endl;
        aux = aux -> next;  // il prossimo a stampare sarà null e cioè termina stampando solo 3
     }

 }