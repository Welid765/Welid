#include <stdio.h>
#define N 2

typedef struct Persona{
char cognome[10];
int voti[3];
} Persona;

void ScriviFile(char file[]);
void LeggiFile(char file[]);

int main()
 {

  char file[] = "studente357.txt";


  ScriviFile(file);
  LeggiFile(file);

  return 0;
 }

 void ScriviFile(char file[])
 {
    Persona buffer;
    FILE *fileptr = fopen(file, "wb");

    if(fileptr == NULL)
    {
        perror("Errore durante l'apertura del file");
        return ;
    }

    for(int i = 0; i < N ;i++)
    {
        printf("Inserisci il cognome");
        scanf("%s", buffer.cognome);

        for(int j = 0; j < 3;j++)
        {
          scanf("%d", &buffer.voti[j]); 
        }

        fwrite(&buffer,sizeof(Persona),1,fileptr); 
        printf("\n");
    }
    fclose(fileptr);
 }

 void LeggiFile(char file[])
 {
    Persona buffer;
    FILE *fileptr = fopen(file, "rb");

    if(fileptr == NULL)
    {
        perror("Errore durante l'apertura del file");
        return ;
    }

    while(fread(&buffer,sizeof(Persona),1,fileptr) == 1)
    {
        printf("Cognome : %s ", buffer.cognome);

        for(int j = 0; j < 3;j++)
        {
          printf("Voti : %d ", buffer.voti[j]); 
        }
        printf("\n");
    }
       fclose(fileptr); 
    }

 