#include <iostream>

using namespace std;

typedef struct Nodo
{
    int info;
    Nodo *next;
} Nodo;

void inserimentoInCoda(Nodo*& testa, Nodo*& coda, int valore);
void StampaCoda(Nodo* s);

int main()
{
    Nodo *testa = nullptr;
    Nodo *coda = nullptr;

    inserimentoInCoda(testa, coda, 3);
    inserimentoInCoda(testa, coda, 5);
    inserimentoInCoda(testa, coda, 7);

    StampaCoda(testa);

    return 0;
} 

void inserimentoInCoda(Nodo*& testa, Nodo*& coda, int valore)
{
    Nodo *p = new Nodo;
    p->info = valore;    
    p->next = nullptr; 
   null    8     8

                8  8   
    if (coda == nullptr)  // Se la coda è vuota, il primo elemento sarà sia testa che coda
    {
        testa = coda = p; 
    }                             
    else 
    {
        coda->next = p;  // Aggiungi l'elemento alla fine della coda  null      
        coda = p;        // Aggiorna la coda per puntare all'ultimo elemento
    }
}

void StampaCoda(Nodo* s)
{ 
    Nodo *aux = s; 

    while (aux != nullptr)
    {
        cout << aux->info << endl;
        aux = aux->next;  // Passa al prossimo nodo
    }
}
