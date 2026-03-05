#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
       printf("Errore apertura file.\n");
        return 1;
    }
    fprintf(file, "Ciao, mondo!\n");
    fprintf(file,"il numero %d" , 10);
   
    

    fclose(file);
    return 0;
}
