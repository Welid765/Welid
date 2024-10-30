//Welid Hanafi 4H 
#include <stdio.h>

int main() {
    // Si assicura che i file siano aperti correttamente
    FILE* file1 = fopen("nomi.txt", "r");
    FILE* file2 = fopen("NOMI2.TXT", "w");

    // Controlla se i file sono stati aperti correttamente
    if (file1 == NULL || file2 == NULL) {
        perror("Errore durante l'apertura del file"); // Stampa un messaggio di errore
        return 1; // Termina il programma con un codice di errore
    }

    int carattere; // Variabile per memorizzare il carattere letto

    // Legge carattere per carattere dal file di input fino alla fine del file (EOF)
    while ((carattere = fgetc(file1)) != EOF) {
        // Converti in maiuscolo se il carattere è una lettera minuscola
        if (carattere >= 'a' && carattere <= 'z') {
            carattere = carattere - 32; // Conversione da minuscolo a maiuscolo
        }
        fputc(carattere, file2); // Scrive il carattere convertito nel file di output
    }

    // Chiude i file dopo la lettura e scrittura
    fclose(file1); // Chiude il file di input
    fclose(file2); // Chiude il file di output

    return 0; // Termina il programma con successo
}
