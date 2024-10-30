//Welid Hanafi 4H
#include <stdio.h>

int main() {
    // Si assicura che i file siano aperti correttamente
    FILE *file1 = fopen("in.txt", "r");
    FILE *file2 = fopen("out.txt", "w");

    // Controlla se i file sono stati aperti correttamente
    if (file1 == NULL || file2 == NULL) {
        perror("Errore durante l'apertura del file"); // Stampa il messaggio di errore
        return 1; // Termina il programma con un codice di errore
    }

    int carattere; // Variabile per memorizzare il carattere letto

    // Legge ogni carattere dal file di input fino alla fine del file (EOF)
    while ((carattere = fgetc(file1)) != EOF) {
        fputc(carattere, file2); // Scrive ogni carattere nel file di output
    }

    // Chiude entrambi i file dopo aver completato la lettura e la scrittura
    fclose(file1); // Chiude il file di input
    fclose(file2); // Chiude il file di output

    return 0; // Termina il programma con successo
}
