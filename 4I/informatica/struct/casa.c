/*scrivere un programma in linguaggio c che:
1. allochi dinamicamente un array iniziale di n numeri
2. inserimento di valori
3. stampa array
4. calcola la somma degli elementi multipli di 3
5. creiamo un nuovo array contenente solo valori dispari*/
#include <stdio.h>
#include <stdlib.h>

int* alloca_array(int n) {
    int* arr=(int*)malloc(n * sizeof(int));
    if (arr==NULL) {
        printf("Errore allocazione memoria\n");
        return NULL;
    }
    return arr;
}
void inserisci_valori(int* arr, int n) {
    printf("Inserisci i valori dell'array:\n");
    for (int i=0; i<n; i++) {
        printf("elemento: ");
        scanf("%d", &arr[i]);
    }
}
void stampa_array(int* arr, int n) {
    printf("L'array inserito e':\n");
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int somma_multipli_3(int* arr, int n) {
    int somma=0;
    for (int i=0; i<n; i++) {
        if (arr[i]%3==0) {
            somma+=arr[i];
        }
    }
    return somma;
}
int conta_dispari(int* arr, int n) {
    int conta=0;
    for (int i=0; i<n; i++) {
        if (arr[i]%2!=0){
            conta++;
        }
    }
    return conta;
}

int* crea_array_dispari(int* arr, int n, int* n_dispari) {
    *n_dispari = conta_dispari(arr, n);
    int* dispari = (int*)malloc((*n_dispari) * sizeof(int));
    if (dispari==NULL && *n_dispari>0) {
        printf("Errore allocazione memoria nuovo array\n");
        return NULL;
    }
    int j=0;
    for (int i=0; i<n; i++) {
        if (arr[i] %2!=0) {
            dispari[j++]=arr[i];
        }
    }
    return dispari;
}

int main() {
    int *array=NULL, n, somma;
    int *array_dispari=NULL;
    int n_dispari;
    printf("Inserisci il numero di elementi dell'array: ");
    scanf("%d", &n);

    array=alloca_array(n);
    inserisci_valori(array, n);
    stampa_array(array, n);

    somma=somma_multipli_3(array, n);
    printf("La somma degli elementi multipli di 3 e': %d\n", somma);

    array_dispari=crea_array_dispari(array, n, &n_dispari);
    printf("Nuovo array con soli valori dispari:\n");
    stampa_array(array_dispari, n_dispari);

    free(array);
    free(array_dispari);
    return 0;
}