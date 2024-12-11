#include <stdio.h> 
#define N 10

int main()
{
   FILE *file1 = fopen("files2.txt", "r");
   FILE *file2 = fopen("files3.txt", "w");

  if(file1 == NULL || file2 == NULL)
  {
     perror("Errore durante l'apertura del file");
     return 0;
  }

  int carattere;

  for(int i = 0; i < N ;i++)
  {
    fscanf(file1, "%d", &carattere);

    fputc(carattere , file2);
  }
   
   fclose(file1);
   fclose(file2);

  return 0;
}
    

