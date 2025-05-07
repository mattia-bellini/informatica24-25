
/* Dato un array ordinato, inserire un nuovo elemento all'interno dell'array mantenendo l'ordine */

#include <stdio.h>

#define DIM 6 // Dimensione massima dell'array (incluso il nuovo elemento)

// Funzione per stampare l'array
void stampaArray(int arr[], int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Funzione per inserire un elemento in un array ordinato
void inserisciElemento(int arr[], int *dim, int elemento) {
    int i = *dim - 1;

    // Sposta gli elementi verso destra per fare spazio al nuovo elemento
    while (i >= 0 && arr[i] > elemento) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Inserisce il nuovo elemento nella posizione corretta
    arr[i + 1] = elemento;

    // Incrementa la dimensione dell'array
    (*dim)++;
}

int main() {
    int array[DIM] = {1, 3, 5, 7, 9}; // Array inizialmente ordinato
    int dim = 5; // Dimensione attuale dell'array
    int nuovoElemento;

    printf("Array iniziale: ");
    stampaArray(array, dim);

    printf("Inserisci un nuovo elemento da aggiungere all'array: ");
    scanf("%d", &nuovoElemento);

    // Inserisce il nuovo elemento mantenendo l'ordine
    inserisciElemento(array, &dim, nuovoElemento);

    printf("Array dopo l'inserimento: ");
    stampaArray(array, dim);

    return 0;
}