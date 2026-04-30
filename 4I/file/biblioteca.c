/*
CREARE UN PROGRAMMA CHE GESTISCA UNA LIBRERIA DOTATA DI DIVERSI LIBRI TALE DA POTER ESEGUIRE LE SEGUENTI OPERAZONI:
- AGGIUNTA/CREAZIONE DELLA LISTA DI LIBRI;
- RICERCA DI UN LIBRO;
- CANCELLAZIONE DI UN LIBRO;
- MODIFICA DELL'ISBN;
- SEPARARE LA LISTA DEI LIBRI IN DUE LISTE CONTENENTI RISPETTIVAMENTE I LIBRI CREATI PRIMA DEL 2000 E QUELLI DOPO;
TUTTO VIENE GESTITO DA FILE BINARI
typedef struct{
      char autore[30];
      char titolo[30];
      char ISBN[20];
      int anno;
}Libro;
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char autore[30];
    char titolo[30];
    char ISBN[20];
    int anno;
} Libro;

void inserisciLibro(const char *filename){
FILE *fp=fopen(filename,"ab");
Libro l;    

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
    return;
    }
    printf("Quanti libri vuoi inserire?\n");
int n;  
scanf("%d",&n);     
for(int i=0;i<n;i++){
    printf("Inserisci autore: ");
    scanf(" %[^\n]", l.autore);
    printf("Inserisci titolo: ");
    scanf(" %[^\n]", l.titolo);
    printf("Inserisci ISBN: ");
    scanf(" %[^\n]", l.ISBN);
    printf("Inserisci anno: ");
    scanf("%d", &l.anno);
    
    fwrite(&l, sizeof(Libro), 1, fp);
}
fclose(fp);
}

void ricercaLibro(const char *filename){
    FILE *fp=fopen(filename,"rb");
Libro l;
char isbn[20];
    int trovato=0;
    if(fp==NULL){
    printf("Rubrica vuota!\n");
        return;
    }
    printf("Inserisci ISBN da cercare: ");
    scanf(" %[^\n]", isbn);
    fread(&l,sizeof(Libro),1,fp);
    