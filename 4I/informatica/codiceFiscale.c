/*
Scrivere un programma in linguaggio C che calcoli e visualizzi il codice
fiscale (senza il carattere di controllo finale) chiedendo all’utente di 
inserire nome, cognome, data di nascita nel formato GG/MM/AAAA, sesso (M o F).
Sarà necessario verificare la correttezza degli input,
quindi nome e cognome devono essere composti solo da lettere; la data 
deve essere composta solo da numeri (oltre agli eventuali /, 
si può scegliere se far inserire un valore della data alla 
volta o tutta la data con il separatore /); il sesso può avere solo la lettera M o F.
Per il controllo di nome, cognome e data, si suggerisce
di leggere l’input carattere per carattere usando getchar()
codice del comune di nascita (per questo esercizio useremo G186
  */
#include <stdio.h>
#include <string.h>

#define MAX 50

int controllaLettera(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return 1;
    else
        return 0;
}

int controllaNumero(char c) {
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}
void leggiTesto(char *dest, char *messaggio) {
    char c;
    int i;
    int corretto = 0;

    while (corretto == 0) {
        i = 0;
        corretto = 1;
        printf("%s", messaggio);

        while ((c = getchar()) != '\n' && c != EOF) {
            if (controllaLettera(c)) {
                if (c >= 'a' && c <= 'z')
                    c = c - 32;
                dest[i++] = c;
            } else {
                corretto = 0;
            }
        }
        dest[i] = '\0';

        if (corretto == 0 || strlen(dest) == 0) {
            printf("Errore: puoi inserire solo lettere.\n");
            corretto = 0;
        }
    }
}