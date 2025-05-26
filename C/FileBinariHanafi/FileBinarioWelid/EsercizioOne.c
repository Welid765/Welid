#include <stdio.h>
#include <string.h>
#define N 2

typedef struct Persona
{
  char nome[10];
  char cognome[10];
  int voti[3];
  int eta;
} persona;

void ScriviFile(char file[]);
void LeggiFile(char file[]);
int Ricercacognome(char file[],char cognome[]);
void Stampainformazioni(char file[]);
int ricercaRecord(char fileName[], char cognome[]);
int stampaRecord(char fileName[], int);

int main()
{

char file[] = "studenti.dat";

  char cogn[10];
  int posizione;

  ScriviFile(file);
  LeggiFile(file);

  printf("Inserisci un cognome da cercare : ");
  scanf("%s", cogn);
  int Conta = Ricercacognome(file,cogn);
  if (Conta != -1)
  {  
    printf("Cognome %s è presente %d volte ", cogn, Conta);
  }
  else
  {
    printf("Cognome %s non trovato", cogn);
  }

  Stampainformazioni(file);

  printf("Inserisci un cognome da cercare : ");
  scanf("%s", cogn);
  int Ricerca = Ricercacognome(file, cogn);

  if(Ricerca != 0)
  {
    printf("Cognome %s trovato nella posizione %d",cogn,Ricerca);
  }
  else
  {
    printf("Cognome %s non trovato",cogn);
  }


  printf("Inserisci la posizione");
  scanf("%d",&posizione);
  int Record = stampaRecord(file, posizione);

  return 0;
}

void ScriviFile(char file[])
{
  persona buffer;
  FILE *fileptr = fopen(file , "wb");

  if (fileptr == NULL)
  {
    perror("Errore durante l'apertura del file");
    return;
  }
  for (int i = 0; i < N; i++)
  {
    printf("Inserisci un cognome");
    scanf("%s", buffer.cognome);

    printf("Inserisci un nome");
    scanf("%s", buffer.nome);

    printf("Inserisci un eta");
    scanf("%d",&buffer.eta);

    for (int j = 0; j < 3; j++)
    {
      printf("Inserisci i voti");
      scanf("%d", &buffer.voti[j]);
    }
    fwrite(&buffer, sizeof(persona), 1, fileptr);
    printf("\n");
  }
  fclose(fileptr);
}


void LeggiFile(char file[])
{
  persona buffer;

  FILE *fileptr = fopen(file , "rb");

  if (fileptr == NULL)
  {
    perror("Errore durante l'apertura del file");
    return;
  }

  while (fread(&buffer, sizeof(persona), 1, fileptr) == 1)
  {
    printf("Cognome : %s", buffer.cognome);
    printf("Nome :%s ",buffer.nome);
    printf("Eta : %d", buffer.eta);

    for (int j = 0; j < 3; j++)
    {
      printf("Voto : %d", buffer.voti[j]);
    }
    printf("\n");
  }
  fclose(fileptr);
}

int Ricercacognome(char file[], char cogn[])
{
  persona buffer;
  FILE *fileptr = fopen(file, "rb");

  if (fileptr == NULL)
  {
    perror("Errore durante l'apertura del file");
    return 1;
  }

  int cont = 0;
  while (fread(&buffer, sizeof(persona), 1, fileptr) == 1)
  {
    if (strcmp(buffer.cognome, cogn) == 0)
    {
      cont++;
    }
  }
  return cont;
  fclose(fileptr);
}

void Stampainformazioni(char file[])
{
  persona buffer;
  FILE *fileptr = fopen(file, "rb");

  if (fileptr == NULL)
  {
    perror("Errore durante l'apertura del file");
    return;
  }

  int somma = 0, Max = 0, Min = 10;
  while (fread(&buffer, sizeof(persona), 1, fileptr) == 1)
  {
    somma = 0;
    for (int j = 0; j < 3; j++)
    {

      somma = somma + buffer.voti[j];
      if (buffer.voti[j] > Max)
      {
        Max = buffer.voti[j];
      }
      if (Min > buffer.voti[j])
      {
        Min = buffer.voti[j];
      }
    }
    float Media = (float)somma / 3;
    printf("Cognome : %s  Nome: %s  Media : %f  Voto Max: %d   Voto Min: %d ", buffer.cognome,buffer.nome , Media, Max, Min);
    printf("\n");
  }
  fclose(fileptr);
}



int ricercaRecord(char file[], char cognome[])
{
  persona buffer;

  FILE *fileptr = fopen(file , "rb");

  if(file == NULL)
  {
    perror("Errore durante l'apertura del file ");
    return 1;
  }

    int cont = 0;
    int posizione = -1;
    int somma = 0;
  

 while (fread(&buffer,sizeof(persona),1,fileptr) == 1)
  {
    if(strcmp(buffer.cognome ,cognome) == 0)
    {
       if(posizione == -1)
        {
           posizione = cont;
        } 
         for(int j = 0; j < 3; j++)
           {
              somma =somma + buffer.voti[j];
           }
           float media = somma / 3;
           printf("Nome : %s Cognome : %s Eta: %d Media : %f ",buffer.nome,buffer.cognome,buffer.eta,media);
    }
    cont++;
  }
   fclose(fileptr);
    return posizione; 
}

int stampaRecord(char file[] , int pos)
{
   persona buffer;

  FILE *fileptr = fopen(file , "wb");

  if (fileptr == NULL)
  {
    perror("Errore durante l'apertura del file");
    return -1;
  }
  if(N>=pos){
    return -1;
  }
  while (fread(&buffer, sizeof(persona), 1, fileptr) == 1){
      fseek(fileptr,pos*sizeof(persona),SEEK_SET);
      LeggiFile(file);

  }
  return 0;
}



