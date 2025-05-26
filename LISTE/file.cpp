#include <iostream>

using namespace std;

typedef struct Nodo 
{
    int info;
    Nodo *next;
}Nodo;

Nodo *InserimentoinTesta(Nodo *s,int x);
Nodo *InserimentoinCoda(Nodo *s); 
void Stampa(Nodo *s);
int ContaNodiPari(Nodo *s);
Nodo *CancellazioneIntesta(Nodo *s);
Nodo *Cancellazioneincoda(Nodo*s);


int main()
{

Nodo *s = nullptr;
int a;

for(int i = 0; i < 5;i++)
{
printf("Inserisci un numero per l'inserimento in testa :");
scanf("%d",&a);
printf("Inserimento in testa : ");
s = InserimentoinTesta(s,a);
Stampa(s);
printf(" \n");
}





int Conta = ContaNodiPari(s);
printf("I numeri pari sono %d ",Conta);

printf("Cancellazione in testa : ");
s = CancellazioneIntesta(s);
Stampa(s);


printf("Inserimento in Coda : ");
s = InserimentoinCoda(s);
s = InserimentoinCoda(s);
s = InserimentoinCoda(s);

Stampa(s);

printf("Cancellazione in coda : ");
s = Cancellazioneincoda(s);
Stampa(s);



s = CancellazioneIntesta(s);
s = CancellazioneIntesta(s);




return 0;
}



Nodo *InserimentoinTesta(Nodo *s,int x)
{
    Nodo *p = new Nodo;
    p->info = x;        
    p->next = s;
    return p;
}

Nodo *InserimentoinCoda(Nodo *s)
{
Nodo *p = new Nodo;
p->info = 5;
p->next = nullptr;

if(s == nullptr)
{
    return p;
}

Nodo *aux = s;

while(aux->next != nullptr) 
{
    aux = aux -> next; 
}     
                    
aux -> next = p;

return s;
}

void Stampa(Nodo *s)
{
  Nodo *aux = s;    

  while(aux != nullptr)
  {
    cout << aux ->info;
    aux = aux ->next;
  }
}

int ContaNodiPari(Nodo *s)
{
  Nodo *aux = s;
  int cont = 0;
 
  while(aux != nullptr)
  {
    if( aux ->info % 2 == 0  )
    {
       cont++;
    }
    aux = aux ->next;          
}
return cont;
}

Nodo *CancellazioneIntesta(Nodo *s)
{
  Nodo *aux = s;

  if(s == nullptr)
  {
    return nullptr;
  }

  s = aux;
  if( s -> next == nullptr )
  {
    delete s;
    return nullptr;           
  }
      s = aux ->next;
      delete aux;                   
  
  return s;
}


Nodo *Cancellazioneincoda(Nodo*s)
{
  Nodo *aux = s;
  Nodo *prev = nullptr;

  if( s == nullptr)
  {
    return nullptr;
  }

  if(s ->next == nullptr)       
  {
      delete s;                                               
      return nullptr;                             
  }

  while(aux -> next != nullptr)
  {                                
                                    
    prev = aux;
    aux = aux -> next;
  }

  prev -> next = nullptr;      
  delete aux;

  return s;
}



                                                         





