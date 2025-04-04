#include <iostream>

using namespace std;


typedef struct Nodo {
    int info;    
    Nodo* next;    
} Nodo;


Nodo* inserimentoaTesta(Nodo* s);
Nodo* inserimentoInCoda(Nodo* s);
void StampaInserimento(Nodo* s);
Nodo* cancellaNodo(Nodo* s, int valore);
Nodo* ricercaNodo(Nodo* s, int valore);
int conteggioNodi(Nodo* s);
void Rimuoviduplicati(Nodo *s);  


int main() {
    Nodo* s = nullptr; 

   
    s = inserimentoaTesta(s);
    s = inserimentoaTesta(s);
    s = inserimentoaTesta(s);
    
    cout << "Lista dopo inserimenti in testa:" << endl;
    StampaInserimento(s);

   
    s = inserimentoInCoda(s);
    cout << "Lista dopo inserimento in coda:" << endl;
    StampaInserimento(s);

    // Ricerca di un nodo con il valore dato 
    Nodo* trovato = ricercaNodo(s, 3);
    if (trovato != nullptr)
        cout << "Nodo con valore 3 trovato" << endl;
    else
        cout << "Nodo con valore 3 non trovato" << endl;

    // Cancella il primo nodo con il valore dato
    s = cancellaNodo(s, 3);
    cout << "Lista dopo cancellazione del valore 3:" << endl;
    StampaInserimento(s);

    // Conta il numero di nodi
    cout << "Numero totale di nodi: " << conteggioNodi(s) << endl;

    return 0;
}

// Funzione per inserire un nodo all'inizio della lista
Nodo* inserimentoaTesta(Nodo* s) {
    Nodo* p = new Nodo; 
    p->info = 3;       
    p->next = s;       
    return p;          
}

// Funzione per inserire un nodo alla fine della lista
Nodo* inserimentoInCoda(Nodo* s) {
    Nodo* p = new Nodo; 
    p->info = 3;         
    p->next = nullptr;  

    if (s == nullptr) { 
        return p;       
    }

    Nodo* aux = s;
    while (aux->next != nullptr) { 
        aux = aux->next;
    }

    aux->next = p;
    return s;      
}

// Funzione per stampare gli elementi della lista
void StampaInserimento(Nodo* s) {
    Nodo* aux = s;  // Puntatore ausiliario per scorrere la lista

    while (aux != nullptr) { 
        cout << aux->info << endl; 
        aux = aux->next;  
    }
}

// Funzione per cercare un nodo con un valore specifico
Nodo* ricercaNodo(Nodo* s, int valore) {
    Nodo* aux = s; 

    while (aux != nullptr) {  // Continua fino alla fine della lista
        if (aux->info == valore) 
            return aux;  // Restituisce il puntatore al nodo trovato
        aux = aux->next;  
    }

    return nullptr;  // Restituisce nullptr se il valore non è stato trovato
}

// Funzione per cancellare un nodo con un valore specifico
Nodo* cancellaNodo(Nodo* s, int valore) {
    if (s == nullptr)  // Se la lista è vuota, non c'è nulla da cancellare
        return s;

    if (s->info == valore) {  // Se il primo nodo contiene il valore da eliminare
        Nodo* temp = s;  // Salva il puntatore al nodo da eliminare
        s = s->next;  // La nuova testa diventa il nodo successivo
        delete temp;  // Dealloca il nodo
        return s;
    }

    Nodo* aux = s;
    while (aux->next != nullptr) {
        if (aux->next->info == valore) {
            Nodo* temp = aux->next;
            aux->next = temp->next; // Collega direttamente il nodo precedente con quello successivo
            delete temp;
        }
        aux = aux->next;
    }

    return s; 
}

// Funzione per contare il numero di nodi nella lista
int conteggioNodi(Nodo* s) {
    int count = 0;  
    Nodo* aux = s; 

    while (aux != nullptr) {  
        count++;  
        aux = aux->next;  
    }

    return count;  // Restituisce il numero totale di nodi
}
