#include <stdio.h>
#define N 8

void Carica(int v[]);
void Stampa(int v[]);
int Max(int v[]);
int MaxInd(int v[]);
int Min(int v[]);
// int *Min(int v[]); //
void OrdinamentoIngenuo(int v[]);

int main()
{

    int v[N];

    Carica(v);
    Stampa(v);

    int MAX = Max(v);
    printf("Il massimo è %d", MAX);

    int MAXind = MaxInd(v);
    printf("L'indice del numero piu grande è : %d ",MAXind);

    int MIN = Min(v);
    printf("Il minimo è %d ", MIN);

    // int MINind = *Min(v); //
   // printf("L'indice del numero piu grande è : %d ",MINind); //

    printf("Ordinamento Ingenuo : ");
    OrdinamentoIngenuo(v);
    Stampa(v);



    return 0;
}

void Carica(int v[])
{
    int *p;
    for (p = v; p - v < N; p++)
    {
        printf("Inserisci dei numeri : ");
        scanf("%d", p);
    }
}

void Stampa(int v[])
{
    int *p;
    for (p = v; p - v < N; p++)
    {
        printf("%d ", *p);
    }
}

int Max(int v[])
{
    int max = 0;
    int *p;
    for (p = v; p - v < N; p++)
    {
        if (*p > max)
        {
            max = *p;
        }
    }
    return max;
}

int MaxInd(int v[])
{
int *p;
int maxInd = 0;
    for (p = v; p - v < N; p++)
    {
        if (*p > v[maxInd])
        {
           maxInd = p - v;
        }
    }
    return maxInd;
}



int Min(int v[])
{
    int min = 10;
    int *p;
    for (p = v; p - v < N; p++)
    {
        if (*p < min)
        {
            min = *p;
        }
    }
    return min;
}




void OrdinamentoIngenuo(int v[])
{
  int *p,*q,aux;

  for(p = v; p - v < N;p++)
  {

    for(q = p + 1; q - v < N;q++)
    {
        if(*p > *q)
        {
      aux = *p;
      *p = *q;
      *q = aux;
    }
  }
}
}


