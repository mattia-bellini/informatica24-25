/*Scrivi un programma in linguaggio C che gestisca un file di testo contenente una lista di numeri interi.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Prodotto {
    char nome[50];
    float prezzo;
};

void InserisciProdotto(){
FILE *fp=fopen("prova.txt","wb");
if(fp==NULL){
    fprintf();
    return 1;
}
 



}