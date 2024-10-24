// Welid Hanafi 4H
#include <stdio.h>

int main() {

    // Si assicura che i file siano aperti correttamente
    FILE* input = fopen("numeri.txt", "r");
    FILE* pari = fopen("pari.txt", "w");
    FILE* dispari = fopen("dispari.txt", "w");

    // Controlla se i file sono stati aperti correttamente
    if (input == NULL) {
        printf("Errore nell'apertura di numeri.txt\n");
        return 1;
    }
    if (pari == NULL || dispari == NULL) {
        printf("Errore nell'apertura di pari.txt o dispari.txt\n");
        fclose(input); // Chiude il file di input se non può aprire pari o dispari
        return 1;
    }

    // Variabile per il numero letto
    int num;

    // Legge i numeri dal file e li scrive nei file appropriati
    while (fscanf(input, "%d", &num) != EOF) {
        // Controlla se il numero è pari o dispari
        if (num % 2 == 0) {
            fprintf(pari, "%d ", num); // Scrive il numero nel file pari.txt
        } else {
            fprintf(dispari, "%d ", num); // Scrive il numero nel file dispari.txt
        }
    }

    // Chiude tutti i file
    fclose(input);  // Chiude il file di input
    fclose(pari);   // Chiude il file pari.txt
    fclose(dispari); // Chiude il file dispari.txt

    // Stampa il messaggio di successo
    printf("Numeri separati con successo nei file pari.txt e dispari.txt.\n");
    return 0;
}

