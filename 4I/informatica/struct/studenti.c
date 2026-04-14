/*
classe di studenti:
cognome,nome,classe,matricola
per ogni studente dotato di matricola abbiamo
le informazioni riguardante gli esami e il livello raggiunto.
ricercare lo studente con più certificazioni
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct{
char cognome[20];
char nome[20];
char classe[3];
int matricola;//1000-9999
}studente;

typedef struct {
    int matricola;
    struct esame{
        chat corso[20];
        int livello;
    };
}certificazioni;


int main(){








}