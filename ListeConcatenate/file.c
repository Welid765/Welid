#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {

    int data;
    struct Nodo *next;

}Nodo;

int main()
{
    Nodo nodo;

    Nodo *head = malloc(sizeof(Nodo));

    head->data = 4;
    head->next = NULL;

    printf("%d",head->data);

    Nodo *n2 = malloc(sizeof(Nodo));

    n2->data = 1;
    head->next = n2;


    printf("%d",head->next->data);

return 0;
}