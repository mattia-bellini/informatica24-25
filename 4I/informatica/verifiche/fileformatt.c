//scrittura su file formattato


#include <stdio.h>

int main(){
FILE *file =fopen("dati .txt" , "r");
 
        char riga[100];

    
     if (file == NULL) {
       printf("Errore apertura file.\n");
        return 1;
    }
    fprintf(file,"%s %d %.2f","Luca"12,6.5)
    fclose(file);
    returnc 0;
}




//lettura

#include <stdio.h>

int main(){
FILE *file =fopen("dati .txt" , "r");
 
        char nome[100];
        int eta=0;
        float media=0;
    
     if (file == NULL) {
       printf("Errore apertura file.\n");
        return 1;
    }
    fscanf(file,"%s %d %.2f",nome , &eta, &media);
    printf(Nome: %s , eta: %d , media: %.2f, nome,eta,media);


    fclose(file);
    returnc 0;
}


//struct 
#include <stdio.h>
typedef struct info{
    nome[30];
    cognome[30];
    eta[3];
};

int main(){
FILE *file =fopen("dati .txt" , "r");
 
        char nome[100];
        int eta=0;
        float media=0;
    
     if (file == NULL) {
       printf("Errore apertura file.\n");
        return 1;
    }
fprintf( "nome: %s, cognome: %s, eta: %d", nome, cognome, eta);
for()


    fclose(file);
    returnc 0;
}

}