#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int num;

    srand(time(NULL));
    int x = rand() % 10 + 1; // genera un numero tra

    printf("Scegli un numero ");
    scanf("%d", &num);

    int cont = 0;
while(num != x)
    {
        cont++;
        printf("hai perso sta volta,sei a %d tentativo/i!", cont);
    }

       printf("hai vinto (scrivi a ig : 24.walo per riscattare il premio) con %d tentativi!", cont);

return 0;
    
}