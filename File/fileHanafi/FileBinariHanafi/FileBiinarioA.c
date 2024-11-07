// Welid Hanafi

#include <stdio.h> 
#include <string.h>
#define N 10

// Definizione della struttura Studente
typedef struct {
    char cognome[50];
    int voti[3];      
} Studente;

// Dichiarazione delle funzioni
void scriviFile();
void leggiFile();
int Ricercacognome(char cogn[]);
void Stampainformazioni();

int main() {
    char cogn[60];

   
    scriviFile();
    
    leggiFile();

 
    printf("\nInserisci un cognome da cercare: ");
    scanf("%s", cogn);
    int cont = Ricercacognome(cogn);
    
   
    if (cont > 0) {
        printf("Il cognome %s è presente %d volte\n", cogn, cont);
    } else { 
        printf("Il cognome %s non è presente\n", cogn);
    }

    
    Stampainformazioni();

    return 0;
}

// Funzione per scrivere i dati di N studenti nel file binario
void scriviFile() {
    FILE *file = fopen("studenti1.dat", "wb"); // Apertura del file in modalità scrittura binaria
    Studente studente[N];

    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }

  
    for (int i = 0; i < N; i++) {
        printf("Inserisci un cognome: ");
        scanf("%s", studente[i].cognome);
        
      
        for (int j = 0; j < 3; j++) {
            printf("Inserisci il voto: ");
            scanf("%d", &studente[i].voti[j]);
        }
        
        // Scrive lo studente corrente nel file
        fwrite(&studente[i], sizeof(Studente), 1, file);
    }
    fclose(file); // Chiude il file
}

// Funzione per leggere e visualizzare i dati degli studenti dal file binario
void leggiFile() {
    FILE *file = fopen("studenti1.dat", "rb"); // Apertura del file in modalità lettura binaria
    Studente studente;

    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }
   
    // Ciclo per leggere e stampare i dati finché ci sono studenti nel file
    while (fread(&studente, sizeof(studente), 1, file) == 1) {
        printf("Cognome: %s\n", studente.cognome);
        
        printf("Voti: ");
        for (int i = 0; i < 3; i++) {
            printf("%d ", studente.voti[i]);
        }
        printf("\n");
    }
    fclose(file); // Chiude il file
}

// Funzione per cercare un cognome nel file e contare quante volte appare
int Ricercacognome(char cogn[]) {
    FILE *file = fopen("studenti1.dat", "rb"); // Apertura del file in modalità lettura binaria
    
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return 0;
    }
    
    Studente studente;
    int cont = 0;
    
    // Ciclo per leggere gli studenti dal file e confrontare il cognome
    while (fread(&studente, sizeof(Studente), 1, file) == 1) {
        if (strcmp(studente.cognome, cogn) == 0) {
            cont++;
        }
    }
    fclose(file); // Chiude il file
    return cont;
}

// Funzione per calcolare e stampare media, voto massimo e minimo per ogni studente
void Stampainformazioni() {
    FILE *file = fopen("studenti1.dat", "rb"); // Apertura del file in modalità lettura binaria
    
    if (file == NULL) {
        perror("Errore durante l'apertura del file");
        return;
    }
    
    Studente studente;

    // Ciclo per leggere ogni studente e calcolare le informazioni richieste
    while (fread(&studente, sizeof(Studente), 1, file) == 1) {
        int Max = 0, Min = 10, somma = 0;
        
        for (int i = 0; i < 3; i++) {
            somma += studente.voti[i];
            if (studente.voti[i] > Max) {
                Max = studente.voti[i];
            }
            if (studente.voti[i] < Min) {
                Min = studente.voti[i];
            }
        }
        
        
        float media = (float) somma / 3;
        
        // Stampa le informazioni dello studente
        printf("Cognome: %s, Media: %.2f, Voto Max: %d, Voto Min: %d\n", studente.cognome, media, Max, Min);
        printf("\n");
    }
    fclose(file); // Chiude il file
}
