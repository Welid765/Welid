#include <stdio.h>
#define N 2

typedef struct Persona {

char nome[10];
int voti[3];

}Persona;

void ScriviFile(char file[]);
void LeggiFile(char file[]);


int main()
{
    char file[] = "studenti.dat";


    ScriviFile(file);
    LeggiFile(file);


    return 0;
}



void ScriviFile(char file[])
{
   Persona buffer;

   FILE *fileptr = fopen(file,"wb");

   for(int i = 0; i < N;i++)
   {
    printf("Inserisci il nome : ");
    scanf("%s", buffer.nome);

    for(int j = 0; j < 3; j++)
    {
     printf("Inserisci il voto : ");
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

   while(fread(&buffer,sizeof(Persona),1,fileptr ) == 1)
   {
    printf("%s ", buffer.nome);

    for(int j = 0; j < 3; j++)
    {
     printf("%d ", buffer.voti[j]);
    }
    printf("\n");
   }
  fclose(fileptr);
}



