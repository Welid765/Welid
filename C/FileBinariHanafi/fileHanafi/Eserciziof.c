#include <stdio.h>
#include <time.h>

FILE *logFile;

void writeLog(const char *message) {
    // Otteniamo il timestamp corrente
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Scriviamo il messaggio di log nel formato desiderato
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}

int main() {
    // Apertura del file di log
    logFile = fopen("log.txt", "a");

    // Scrittura dei messaggi di log
    writeLog("Messaggio di log 1");
    writeLog("Messaggio di log 2");

    // Chiusura del file di log
    fclose(logFile);
    
    return 0;
}
