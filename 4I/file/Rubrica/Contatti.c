#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];
    char telefono[15];
    char sesso;
} Contatto;


void aggiungiContatto() {
    FILE *fp = fopen("rubrica.dat", "ab");

    if (fp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    Contatto c;

    printf("Inserisci nome: ");
    scanf(" %[^\n]", c.nome);

    printf("Inserisci telefono: ");
    scanf(" %[^\n]", c.telefono);

    printf("Inserisci sesso (M/F): ");
    scanf(" %c", &c.sesso);

    fwrite(&c, sizeof(Contatto), 1, fp);
    fclose(fp);

    printf("Contatto aggiunto!\n");
}


void visualizzaRubrica() {
    FILE *fp = fopen("rubrica.dat", "rb");

    if (fp == NULL) {
        printf("Rubrica vuota!\n");
        return;
    }

    Contatto c;

    printf("\n--- Rubrica ---\n");
    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }

    fclose(fp);
    printf("----------------\n");
}


void eliminacontatto() {
    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *tmp = fopen("rubrica_tmp.dat", "wb");

    Contatto c;
    char cerca[30];
    int trovato = 0;

    if (fp == NULL || tmp == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    printf("Inserisci il nome da eliminare: ");
    scanf(" %[^\n]", cerca);

    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        if (strcmp(c.nome, cerca) == 0) {
            printf("Contatto eliminato!\n");
            trovato = 1;
        } else {
            fwrite(&c, sizeof(Contatto), 1, tmp);
        }
    }

    fclose(fp);
    fclose(tmp);

    remove("rubrica.dat");
    rename("rubrica_tmp.dat", "rubrica.dat");

    if (!trovato) {
        printf("Contatto non trovato!\n");
    }
}


void separacontatti() {
    Contatto c;

    FILE *fp = fopen("rubrica.dat", "rb");
    FILE *fpF = fopen("femmine.dat", "wb");
    FILE *fpM = fopen("maschi.dat", "wb");

    if (fp == NULL || fpF == NULL || fpM == NULL) {
        printf("Errore apertura file!\n");
        return;
    }

    while (fread(&c, sizeof(Contatto), 1, fp) == 1) {
        if (c.sesso == 'F' || c.sesso == 'f') {
            fwrite(&c, sizeof(Contatto), 1, fpF);
        } else if (c.sesso == 'M' || c.sesso == 'm') {
            fwrite(&c, sizeof(Contatto), 1, fpM);
        }
    }

    fclose(fp);
    fclose(fpF);
    fclose(fpM);

    // VISUALIZZA FEMMINE
    fpF = fopen("femmine.dat", "rb");
    printf("\n--- Rubrica Femmine ---\n");
    while (fread(&c, sizeof(Contatto), 1, fpF) == 1) {
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fpF);

    // VISUALIZZA MASCHI
    fpM = fopen("maschi.dat", "rb");
    printf("\n--- Rubrica Maschi ---\n");
    while (fread(&c, sizeof(Contatto), 1, fpM) == 1) {
        printf("Nome: %s, Telefono: %s, Sesso: %c\n", c.nome, c.telefono, c.sesso);
    }
    fclose(fpM);
}

int main() {
    int scelta;

    do {
        printf("\n===== MENU RUBRICA =====\n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza rubrica\n");
        printf("3. Elimina contatto\n");
        printf("4. Separa contatti per sesso\n");
        printf("0. Esci\n");
        printf("Scelta: ");

        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                aggiungiContatto();
                break;
            case 2:
                visualizzaRubrica();
                break;
            case 3:
                eliminacontatto();
                break;
            case 4:
                separacontatti();
                break;
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida!\n");
        }

    } while (scelta != 0);

    return 0;
}