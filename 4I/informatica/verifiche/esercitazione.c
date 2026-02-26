#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRODOTTI 100

typedef struct {
    char nome[20];
    int codice;
    int quantita;
    float prezzo;
} Prodotto;

void inserisciProdotto(Prodotto lista[], int *n) {
    if (*n >= MAX_PRODOTTI) {
        printf("Inventario pieno\n");
        return;
    }
    
    printf("Inserimento nuovo prodotto:\n");
    printf("Nome: ");
    scanf("%s", lista[*n].nome);
    printf("Codice: ");
    scanf("%d", &lista[*n].codice);
    printf("Quantita: ");
    scanf("%d", &lista[*n].quantita);
    printf("Prezzo: ");
    scanf("%f", &lista[*n].prezzo);
    
    (*n)++;
    printf("Prodotto inserito con successo!\n");
}

void stampaElenco(Prodotto lista[], int n) {
    if (n == 0) {
        printf("Nessun prodotto in inventario.\n");
        return;
    }
    
    printf("\n=== ELENCO PRODOTTI ===\n");
    printf("%s  %s  %s  %s\n", "NOME", "CODICE", "QUANTITA", "PREZZO");
    
    
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %.2f\n", 
               lista[i].nome, 
               lista[i].codice, 
               lista[i].quantita, 
               lista[i].prezzo);
    }
}

void cercaPerCodice(Prodotto lista[], int n) {
    int codice;
    printf("Inserisci il codice da cercare: ");
    scanf("%d", &codice);
    
    for (int i = 0; i < n; i++) {
        if (lista[i].codice == codice) {
            printf("\nProdotto trovato:\n");
            printf("Nome: %s\n", lista[i].nome);
            printf("Codice: %d\n", lista[i].codice);
            printf("Quantita: %d\n", lista[i].quantita);
            printf("Prezzo: %.2f\n", lista[i].prezzo);
            return;
        }
    }
    
    printf("Nessun prodotto trovato con codice %d\n", codice);
}

void calcolaValoreTotale(Prodotto lista[], int n) {
    if (n == 0) {
        printf("Nessun prodotto in inventario.\n");
        return;
    }
    
    float totale = 0;
    for (int i = 0; i < n; i++) {
        totale += lista[i].prezzo * lista[i].quantita;
    }
    
    printf("Valore totale dell'inventario: %.2f\n", totale);
}

int main() {
    Prodotto inventario[MAX_PRODOTTI];
    int nProdotti = 0;
    int scelta;
    
    do {
        printf("\n=== MENU ===\n");
        printf("1. Inserisci prodotto\n");
        printf("2. Stampa elenco prodotti\n");
        printf("3. Cerca prodotto per codice\n");
        printf("4. Calcola valore totale inventario\n");
        printf("5. Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);
        
        switch (scelta) {
            case 1:
                inserisciProdotto(inventario, &nProdotti);
                break;
                
            case 2:
                stampaElenco(inventario, nProdotti);
                break;
                
            case 3:
                cercaPerCodice(inventario, nProdotti);
                break;
                
            case 4:
                calcolaValoreTotale(inventario, nProdotti);
                break;
                
            case 5:
                printf("esci\n");
                break;
                
           
        }
        
    } while (scelta != 5);
    
    return 0;
}