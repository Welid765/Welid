#include <iostream>

using namespace std;

typedef struct Nodo {
    int info;
    Nodo* next;
} Nodo;

Nodo* inserimentoaTesta(Nodo* s);  // La funzione restituisce il nuovo puntatore alla testa
void StampaInserimento(Nodo* s);

int main() {
    Nodo* s = nullptr;

    s = inserimentoaTesta(s);
    s = inserimentoaTesta(s);
    s = inserimentoaTesta(s);
    StampaInserimento(s);

    return 0;
}

Nodo* inserimentoaTesta(Nodo* s) {  // Ritorna il nuovo valore della testa
    Nodo* p = new Nodo;    
    p->info = 3;                                                                
    p->next = s;  // Collega il nuovo nodo alla lista esistente               
    return p;     // Restituisce il nuovo nodo come nuova testa                  
}

void StampaInserimento(Nodo* s) {
    Nodo* aux = s;                                   
         
    while (aux != nullptr) {
        cout << aux->info << endl;
        aux = aux->next;
    }
}

