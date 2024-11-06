// Welid Hanafi 4H

#include <stdio.h>
#include <string.h>

#define N 10  // Definiamo N come 10

// Definizione della struttura con typedef
typedef struct Persona {
    char cognome[50];
    int voti[3]; // 3 voti per ogni studente
} persona;

// Funzione per scrivere un file con 10 record
void scrivi_file() {
    FILE *file;
    persona s;

    file = fopen("studenti.dat", "wb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }

    for (int i = 0; i < N; i++) {
        printf("Inserisci il cognome dello studente: ");
        scanf("%s", s.cognome);
        printf("Inserisci 3 voti per lo studente %s:\n", s.cognome);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &s.voti[j]);
        }
        fwrite(&s, sizeof(persona), 1, file);
    }

    fclose(file);
}

// Funzione per leggere e stampare su monitor le informazioni del file
void leggi_file() {
    FILE *file;
    persona s;

    file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }

    while (fread(&s, sizeof(persona), 1, file)) {
        printf("Cognome: %s\n", s.cognome);
        printf("Voti: ");
        int somma = 0, max = s.voti[0], min = s.voti[0];
        for (int i = 0; i < 3; i++) {
            printf("%d ", s.voti[i]);
            somma += s.voti[i];
            if (s.voti[i] > max) max = s.voti[i];
            if (s.voti[i] < min) min = s.voti[i];
        }
        printf("\nMedia: %.2f\n", (float)somma / 3);
        printf("Voto più alto: %d\n", max);
        printf("Voto più basso: %d\n", min);
        printf("---------------\n");
    }

    fclose(file);
}

// Funzione per contare le occorrenze di uno studente con un cognome specifico
int conta_cognome(char *cognome) {
    FILE *file;
    persona s;
    int conta = 0;

    file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return -1;
    }

    while (fread(&s, sizeof(persona), 1, file)) {
        if (strcmp(s.cognome, cognome) == 0) {
            conta++;
        }
    }

    fclose(file);
    return conta;
}

int main() {
    char cognome[50];
    int occorrenze;

    // Scrive i dati nel file
    scrivi_file();

    // Legge e stampa i dati dal file
    leggi_file();

    // Conta quante volte appare un cognome
    printf("Inserisci il cognome da cercare: ");
    scanf("%s", cognome);
    occorrenze = conta_cognome(cognome);

    // Verifica se il cognome è stato trovato
    if (occorrenze > 0) {
        printf("Cognome trovato! Appare %d volte.\n\n", occorrenze);
    } else {
        printf("Cognome non trovato.\n\n");
    }

    return 0;
}
