#include <stdio.h> 
#define N 2
#include <string.h>

void ScriviFile(char file[]);
void LeggiFile(char file[]);
int RicercaCognome(char file[],char cogn[]);
void Stampainformazioni(char file[]);
int ricercaRecord(char file[], char cognome[]);


typedef struct Nascita{
  int giorno;
  char mese[10];
  int anno;
} nascita;

typedef struct Persona {
  char cognome[10];
  int voti[8];
  nascita data;
}persona;



int main()
{

char cognome[10];

char file[] = "studenti1.dat";


ScriviFile(file);
LeggiFile(file);

printf("Inserisci il cognome : ");
scanf("%s" ,cognome);
int Conta = RicercaCognome(file,cognome);
if(Conta != 0)
{
    printf("il cognome %s è presente %d volte",cognome,Conta);
}
else
{
     printf("il cognome %s non è presente", cognome);
}

Stampainformazioni(file);

printf("Inserisci il cognome : ");
scanf("%s" ,cognome);
int Ricerca = ricercaRecord(file,cognome);
if(Ricerca > -1 )
{
    printf("l'indice del primo record trovato e %d",Ricerca);
}
else
{
    printf("Errore ");
}




return 0;
}


void ScriviFile(char file[])
{
  persona buffer;

  FILE *fileptr = fopen(file, "wb");

if(fileptr == NULL)
{
    perror("Errore durante l'apertura del file");
    return;
}

for(int i = 0; i < N;i++)
{
    printf("Inserisci un cognome");
    scanf("%s", buffer.cognome);

    for(int j = 0; j < 8 ;j++)
    {
        printf("Inserisci i voti : ");
        scanf("%d" ,&buffer.voti[j]);
    }
    
     printf("inserisci il giorno di nascita : ");
     scanf("%d", &buffer.data.giorno);
     printf("inserisci il mese di nascita : ");
     scanf("%s", buffer.data.mese);
     printf("inserisci l'anno di nascita");
     scanf("%d", &buffer.data.anno);


     fwrite(&buffer,sizeof(persona),1,fileptr);
}
fclose(fileptr);
}


void LeggiFile(char file[])
{
  persona buffer;

  FILE *fileptr = fopen(file, "rb");

if(fileptr == NULL)
{
    perror("Errore durante l'apertura del file");
    return;
}

   while((fread(&buffer,sizeof(persona),1,fileptr)) == 1)
   {
    printf("Cognome : %s", buffer.cognome);

    for(int j = 0; j < 8 ;j++)
    {
        printf("Voto : %d" , buffer.voti[j]);
    }

     printf("%d",  buffer.data.giorno);
     printf("%s", buffer.data.mese);
     printf("%d",  buffer.data.anno);
}
fclose(fileptr);
}

int RicercaCognome(char file[],char cogn[])
{
    persona buffer;
     
    FILE *fileptr = fopen(file, "rb");

    if(fileptr == NULL)
    {
     perror("Errore durante l'apertura del file");
     return -1;
    }
     
     int cont = 0;
    while(fread(&buffer,sizeof(persona),1,fileptr) == 1)
    {
        if(strcmp(buffer.cognome , cogn) == 0)
        {
             cont++; 
        }
    }
    fclose(fileptr);
     return cont;
}

void Stampainformazioni(char file[])
{
     persona buffer;
     
    FILE *fileptr = fopen(file, "rb");

    if(fileptr == NULL)
    {
     perror("Errore durante l'apertura del file");
     return;
    }

    while(fread(&buffer,sizeof(persona),1,fileptr) == 1)
    {
       int somma = 0,Min = 100,Max = 0;
        for(int j = 0; j < 8;j++)
        {
          somma = somma + buffer.voti[j];
          if(buffer.voti[j] > Max)
           {
               Max = buffer.voti[j];
           }
           if( Min > buffer.voti[j])
           {
                  Min = buffer.voti[j];
           }
        }
        float media = (float) somma / 3;
        printf("Cognome : %s  Media : %f VotoMax : %d VotoMin: %d",buffer.cognome,media,Max,Min);
    }
    fclose(fileptr);
   }  

     int Eta = 0,somma = 0;
   int ricercaRecord(char file[] , char cogn[])
   {
     persona buffer;
     
    FILE *fileptr = fopen(file, "rb");

    if(fileptr == NULL)
    {
     perror("Errore durante l'apertura del file");
     return -1;
    }

    int posizione = -1;
    int cont = 0;
    int somma = 0;
    while(fread(&buffer,sizeof(persona),1,fileptr) == 1)
    {
        if(strcmp(buffer.cognome, cogn ) ==0)
          {
            if(posizione == -1)
            {
                posizione = cont;
                 Eta = 2024 - buffer.data.anno;

                  for(int j = 0; j < 8;j++)
                   {
                      somma = somma +  buffer.voti[j];
                   }
              float media = (float)somma / 8;

              printf("Cognome : %s Eta : %d media : %f",buffer.cognome,Eta,media);
             }  
            }
            cont++;
          }
          fclose(fileptr);
           return posizione;
    }


int stampaRecord(char file[], int posizione)
{
     persona buffer;
     
    FILE *fileptr = fopen(file, "rb");

    if(fileptr == NULL)
    {
     perror("Errore durante l'apertura del file");
     return -1;
    }

    fseek(fileptr,posizione*sizeof(persona),SEEK_SET);
    





    















