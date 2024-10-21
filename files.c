#include <stdio.h>
int main()
{

FILE* file_ptr = fopen("file.txt", "w");
if (file_ptr == NULL) {
  return 1;
}

    fclose(file_ptr); // Chiusura del file
    return 0;
}
