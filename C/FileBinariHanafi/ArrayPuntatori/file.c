#include <stdio.h>
#define N 8

void Carica(int v[]);
void Stampa(int v[]);
int Max(int v[]);
int Min(int v[]);

int main()
{

int v[N];


Carica(v);
Stampa(v);

int MAX = Max(v);
printf("Il massimo è %d" , MAX);

int MIN = Min(v);
printf("Il minimo è %d ", MIN);


return 0;

}


void Carica(int v[])
{
    int *p;
      for(p = v; p - v < N; p++) 
          {
              printf("Inserisci dei numeri : ");
              scanf("%d", p);
          }  
}



void Stampa(int v[])
{
    int *p;
      for(p = v; p - v < N; p++) 
          {
              printf("%d ", *p);
          }  
}

int Max(int v[])
{
    int max = 0;
    int *p;
   for(p = v;p - v < N; p++)
    {
        if( *p > max)
        {
            max = *p;
        }
    }
    return max;
}

int Min(int v[])
{
    int min = 10;
    int *p;
   for(p = v;p - v < N; p++)
    {
        if( *p < min)
        {
            min = *p;
        }
    }
    return min;
}




    








