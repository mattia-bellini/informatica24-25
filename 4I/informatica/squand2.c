/*visualizzare le squadre il cui allenatore presenta più di 10 titoli 
e un punteggio della squadra maggiore di 30*/

#include <stdio.h>

struct squadra{
    char nome[20];
    char colore[20];
    int punteggio;
    struct allenatore{
        char nomeA[20];
        char cognome[20];
        int titoli;
    } mister;
};

typedef struct squadra squadre;

int main() {

    int n;
    printf("Quante squadre vuoi inserire?");
    scanf("%d", &n);

    squadre s[n];
    for (int i = 0; i < n; i++) {
        printf("\nSquadra %d \n", i + 1);
        printf("Nome squadra: ");
        scanf("%s", s[i].nome);
        printf("Colore squadra: ");
        scanf("%s", s[i].colore);
        printf("Punteggio: ");
        scanf("%d", &s[i].punteggio);
        printf("Nome allenatore: ");
        scanf("%s", s[i].mister.nomeA);
        printf("Cognome allenatore: ");
        scanf("%s", s[i].mister.cognome);
        printf("Titoli allenatore: ");
        scanf("%d", &s[i].mister.titoli);
    }


    printf("\nSquadre con allenatore >10 titoli e punteggio >30 \n");

    for (int i = 0; i < n; i++) {
        if (s[i].mister.titoli > 10 && s[i].punteggio > 30) {
            printf("\nSquadra: %s", s[i].nome);
            printf("\nColore: %s", s[i].colore);
            printf("\nPunteggio: %d", s[i].punteggio);
            printf("\nAllenatore: %s %s", s[i].mister.nomeA, s[i].mister.cognome);
            printf("\nTitoli: %d\n", s[i].mister.titoli);
        }
    }

    return 0;
}


}