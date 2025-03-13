#include <iostream>

using namespace std;


typedef struct Nodo
{
int valore;
Nodo *next;
} Nodo;

Nodo *Inserimentointesta(Nodo*s);
Nodo *Inserimentoincoda(Nodo*s);
void StampaLista(Nodo *s);
Nodo *Cancellazioneintesta(Nodo *s);
Nodo *Cancellazioneincoda(Nodo*s);


int main()
{

    Nodo *s = nullptr;

    cout << "Inserimento in Testa : " << endl;
    s = Inserimentointesta(s);
    s = Inserimentointesta(s);
    s = Inserimentointesta(s);
    StampaLista(s);
    
    cout << "Cancellazione in testa : " << endl;
    s = Cancellazioneintesta(s);
    StampaLista(s);


    cout << "Inseriemnto in Coda : " << endl;
    s = Inserimentoincoda(s);
    s = Inserimentoincoda(s);
    StampaLista(s);

    cout << "Cancellazione in coda : " << endl;
    s = Cancellazioneincoda(s);
    StampaLista(s);

    return 0;
}

Nodo *Inserimentointesta(Nodo*s)
{
Nodo *p = new Nodo;
p -> valore = 3;
p -> next = s;   
return p;           
}


Nodo *Inserimentoincoda(Nodo*s)
{
  Nodo *p = new Nodo;
  p -> valore = 3;
  p ->next = nullptr;

  if(s == nullptr)
  {
    return p;
  }

  Nodo *aux = s;
  while(aux -> next != nullptr)
  {
    aux = aux -> next;
  }
   aux -> next = p;
   return s;
}

void StampaLista(Nodo *s)
{
   Nodo *aux = s;
   while(aux != nullptr)
   {
      cout << aux->valore << endl;
      aux = aux -> next;
   }

}

Nodo *Cancellazioneintesta(Nodo *s)
{
  if(s == nullptr)
  {
    return nullptr;
  }

  if (s->next == nullptr) {  
    delete s;             
    return nullptr;  
  }  
    Nodo *aux = s;
   
     s = s -> next; 
     delete aux;

     return s;
    
  }
 



Nodo *Cancellazioneincoda(Nodo*s)
{

if(s == nullptr)
{
  return nullptr;
}

if(s -> next == nullptr)
{
  delete s;
  return nullptr;
}

Nodo *aux = s;
Nodo *prev = nullptr;

while(aux -> next != nullptr)
{
prev = aux;
aux = aux -> next;
}

delete aux;
prev -> next = nullptr;

return prev;
}
















