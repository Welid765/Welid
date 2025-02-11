#include <stdio.h>
#define N 2

void Carica(int v[]);
void Stampa(int v[]);

int main()
{
    int v[N];


    Carica(v);
    Stampa(v);

    return 0;
}


void Carica(int v[])
{
    int *p = v;
    for(p = v; p - v < N; p++)
    {
      scanf("%d",*p);
    }
}


void Stampa(int v[], int *p = v;)
{
    int *p = v;
    for(p = v; p - v < N; p++)
    {
      printf("%d", p);
    }
}