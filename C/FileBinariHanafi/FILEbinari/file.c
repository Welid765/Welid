#include <stdio.h>
#define N 2
#include <string.h>

typedef struct Persona {
    char cognome[10];
    int eta;
    int voti[3];

}Persona;

void ScriviFile(char file[]);
void LeggiFile(char file[]);
int RicercaCognome(char file[],char cogn[]);



int main()
{
    char cognom[10];
    char file[] = "studenti.dat";

    ScriviFile(file);
    LeggiFile(file);

    for(int i = 0; i < N;i++)
    {
    printf("Inserisci un cognome da cercare ");
    scanf("%s",cognom);

    int Ricerca = RicercaCognome(file,cognom);
    if(Ricerca > 0)
    {
        printf("il cognome %s esiste ",cognom);
    }
    else
    {
        printf("il cognome %s non esiste ", cognom);
    }
}


}

void ScriviFile(char file[])
{
    Persona buffer;

    FILE *fileptr = fopen(file,"wb");

    if(fileptr == NULL)
    {
        perror("Errore durante l'apertura del file");
        return;
    }

    for(int i = 0; i < N;i++)
    {
        printf("Inserisci il cognome : ");
        scanf("%s", buffer.cognome);

        printf("Inserisci l'eta : ");
        scanf("%d", &buffer.eta);

        for(int j = 0; j < 3 ;j++)
    {
        printf("Inserisci i voti :");
        scanf("%d", &buffer.voti[j]);
    }
  fwrite(&buffer,sizeof(Persona),1,fileptr);
  }

fclose(fileptr);
}


void LeggiFile(char file[])
{
    Persona buffer;

    FILE *fileptr = fopen(file,"rb");

    if(fileptr == NULL)
    {
        perror("Errore durante l'apertura del file");
        return;
    }
    
    int somma;
    while(fread(&buffer,sizeof(Persona),1,fileptr) == 1)
    {
        int somma = 0;
        printf("Cognome : %s ", buffer.cognome);

        printf("Eta : %d", buffer.eta);

        for(int j = 0; j < 3 ;j++)         
    {
        printf("Voti : %d ", buffer.voti[j]);
        somma = somma + buffer.voti[j];
    }
     float media = (float) somma / 3;
     printf("la Media è : %f ", media);
     printf(" \n");
}
fclose(fileptr);
}


int RicercaCognome(char file[],char cognome[])
{
    Persona buffer;

    FILE *fileptr = fopen(file,"rb");

    if(fileptr == NULL)
    {
        perror("Errore durante l'apertura del file");
        return -1;
    }
    int cont = 0;
    while(fread(&buffer,sizeof(Persona),1,fileptr) == 1)
    {
        if(strcmp(buffer.cognome ,cognome) == 0)
        {
            cont++;
        }
    }
fclose(fileptr);
  return cont;
}















 







 




