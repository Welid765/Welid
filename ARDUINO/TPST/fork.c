//Welid Hanafi 4H

#include <stdio.h>   // printf
#include <unistd.h>  // getpid
#include <math.h>    // sqrt

//------------------------------------------------------------------------------------------
//=== Function prototypes ==================================================================
//------------------------------------------------------------------------------------------
void childProcess(int cateto1, int cateto2);
void fatherProcess(int cateto1, int cateto2);

//------------------------------------------------------------------------------------------
//=== Main =================================================================================
//------------------------------------------------------------------------------------------
int main() {
    // Inizializzazione delle variabili del triangolo rettangolo
    int cateto1 = 3, cateto2 = 4;

    printf("\n[INIZIO] - Esiste solo il processo padre. Il padre del padre e' la shell.\n");
    printf("[INIZIO] - Prima della fork - pid processo=%d, pid padre=%d\n", getpid(), getppid());

    // Creazione del processo figlio
    int pid = fork();

    if (pid == 0) {
        // Esecuzione codice del processo figlio
        childProcess(cateto1, cateto2);
    } else if (pid > 0) {
        // Esecuzione codice del processo padre
        fatherProcess(cateto1, cateto2);
    } else {
        // Errore
        printf("Creazione del processo figlio fallita!\n");
    }

    // Codice comune a processo padre e figlio
    printf("[FINE] - Termine del processo con pid=%d, padre=%d\n", getpid(), getppid());

    return 0;
}

//------------------------------------------------------------------------------------------
//=== Local Functions ======================================================================
//------------------------------------------------------------------------------------------
void childProcess(int cateto1, int cateto2) {
    // Calcolo del perimetro
    double ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    double perimetro = cateto1 + cateto2 + ipotenusa;

    printf("\n[Figlio] - Il perimetro del triangolo e' %.2f\n", perimetro);
    printf("[Figlio] - pid=%d, pid padre=%d\n", getpid(), getppid());
}

void fatherProcess(int cateto1, int cateto2) {
    // Calcolo dell'area
    double area = 0.5 * cateto1 * cateto2;

    printf("\n[Padre] - L'area del triangolo e' %.2f\n", area);
    printf("[Padre] - pid=%d, pid padre=%d\n", getpid(), getppid());
}
