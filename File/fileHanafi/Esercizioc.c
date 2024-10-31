
//Welid Hanafi 4H 

#include <stdio.h>

int main() {
    // Si assicura che il file sia aperto correttamente
    FILE *file = fopen("file.txt", "r"); 
    
    // Controlla se il file è stato aperto correttamente
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n"); // Stampa un messaggio di errore
        return 1; // Termina il programma con un codice di errore
    }

    // Dichiara le variabili
    int char_count = 0, word_count = 0, line_count = 0; 
    char ch;
    int in_word = 0; // Indica se si è all'interno di una parola (1 = sì, 0 = no)

    // Legge ogni carattere dal file fino alla fine (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Conta i caratteri
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            char_count++; // Incrementa il conteggio dei caratteri
        }

        // Conta le parole
        if (ch != ' ' && ch != '\t' && ch != '\n' && in_word == 0) {
            in_word = 1; 
            word_count++; // Incrementa il conteggio delle parole
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            in_word = 0; 
        }

        // Conta le righe
        if (ch == '\n') {
            line_count++; // Incrementa il conteggio delle righe
        }
    }

    // Stampa i risultati
    printf("Caratteri: %d\n", char_count);
    printf("Parole: %d\n", word_count);
    printf("Righe: %d\n", line_count);

    // Chiude il file dopo la lettura
    fclose(file);

    return 0; // Termina il programma con successo
}

