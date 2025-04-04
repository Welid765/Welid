#include <iostream>

using namespace std;

typedef struct Nodo
{
    int info;
    Nodo *next;
} Nodo;

Nodo *Inserimentointesta(Nodo *s, int);
Nodo *Inserimentoincoda(Nodo *s);
void Stampa(Nodo *s);
Nodo *Ricerca(Nodo *s, int);
int Conta(Nodo *s);
Nodo *Cancellazioneintesta(Nodo *s);
Nodo *Cancellazioneincoda(Nodo *s);
void Rimuoviduplicati(Nodo *s);
Nodo *Ordinamentoingenuo(Nodo *s);

int main()
{
    Nodo *s = nullptr;
    Nodo *d = nullptr;
    int a;

    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    s = Inserimentointesta(s, a);

    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;

    s = Inserimentointesta(s, a);

    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    s = Inserimentointesta(s, a);


    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    s = Inserimentointesta(s, a);


    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    s = Inserimentointesta(s, a);

    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    s = Inserimentointesta(s, a);

    cout << "Inserimento in Testa : " << endl;
    Stampa(s);

    cout << "Ordinamento : " << endl;
    s = Ordinamentoingenuo(s);
    Stampa(s);

    cout << "Rimuovi duplicati : " << endl;
    Rimuoviduplicati(s);
    Stampa(s);

    cout << "Cancellazione in testa : " << endl;
    s = Cancellazioneintesta(s);
    Stampa(s);

    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    cout << "Inserimento in Coda : " << endl;
    Stampa(s);

    cout << "Cancellazione in Coda : " << endl;
    s = Cancellazioneincoda(s);
    Stampa(s);

    int Contatore = Conta(s);
    cout << "Il numero dei nodi è : " << Contatore << endl;

    cout << "Inserisci il valore del nodo : " << endl;
    cin >> a;
    d = Ricerca(s, a);
    if (d != nullptr)
    {

        cout << "Elemento trovato : " << a << endl;
    }
    else
    {
        cout << "Elemento non trovato : " << a << endl;
    }

    return 0;
}

Nodo *Inserimentointesta(Nodo *s, int x)
{
    Nodo *p = new Nodo;
    p->info = x;
    p->next = s;

    return p;
}

void Stampa(Nodo *s)
{
    Nodo *aux = s;

    while (aux != nullptr)
    {
        cout << aux->info << endl;
        aux = aux->next;
    }
}

Nodo *Inserimentoincoda(Nodo *s)
{
    Nodo *p = new Nodo;
    p->info = 2;
    p->next = nullptr;

    if (s == nullptr)
    {
        return p;
    }

    Nodo *aux = s;

    while (aux->next != nullptr)
    {
        aux = aux->next;
    }

    aux->next = p;

    return s;
}

Nodo *Ricerca(Nodo *s, int x)
{
    Nodo *aux = s;

    while (aux != nullptr)
    {
        if (aux->info == x)
        {
            return aux;
        }
        aux = aux->next;
    }
    return nullptr;
}

int Conta(Nodo *s)
{
    Nodo *aux = s;
    int cont = 0;

    while (aux != nullptr)
    {
        cont++;
        aux = aux->next;
    }
    return cont;
}
Nodo *Cancellazioneintesta(Nodo *s)
{
    Nodo *aux = s;
    Nodo *Temp = nullptr;

    if (s == nullptr)
    {
        return s;
    }

    if (s->next == nullptr)
    {
        Temp = aux;
        s = s->next;
        delete Temp;

        return s;
    }

    if (aux->next != nullptr)
    {
        Temp = aux;
        s = s->next;
        delete Temp;
    }
    return s;
}

Nodo *Cancellazioneincoda(Nodo *s)
{
    Nodo *aux = s;
    Nodo *prev = nullptr;

    if (s == nullptr)
    {
        return nullptr;
    }

    if (s->next == nullptr)
    {
        delete aux;
        s = s->next;

        return s;
    }

    while (aux->next != nullptr)
    {
        prev = aux;
        aux = aux->next;
    }

    prev->next = nullptr;
    delete aux;

    return s;
}


void Rimuoviduplicati(Nodo *s)
{
    Nodo *aux = s;
    Nodo *temp = nullptr;

    while (aux != nullptr)
    {
        Nodo *prev = aux->next;
        while(prev != nullptr)
        {
            if (aux->info == prev->info)
            {
                temp = prev;
                aux->next = temp->next;
                delete temp;
                prev = aux->next;
            }
            else
            {
                prev = prev->next;
            }
        }
        aux = aux -> next;
    }
}


Nodo *Ordinamentoingenuo(Nodo *s)
{
    Nodo *aux = s;

     if(aux == nullptr)
    {
          return nullptr;
    }
     
    while(aux != nullptr)
    {
      Nodo *prev = aux->next;
     while(prev != nullptr)
        {
           if(aux->info > prev->info)
           {
              int temp = aux->info;
              aux ->info = prev->info;
              prev->info = temp;
           }
           prev = prev ->next;
        }
        aux = aux ->next;
    }
    return s;
}   
