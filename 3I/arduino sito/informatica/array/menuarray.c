/*
Creiamo un menu:
1) Caricare un array con soli valori pari
2) Stampare l'array
3) Ordinare l'array con il bubble sort
4) Trovare il valore massimo all'interno dell'array e scambiarlo di posizione con il valore minimo
*/

#include <stdio.h>
#define DIM 5

// Funzione per richiedere valori pari
void richiediValori(int vett[], int dim) {
    int n = 0, i = 0;
    while (i < dim) {
        printf("Inserisci un valore pari: ");
        scanf("%d", &n);
        if (n % 2 == 0) {
            vett[i] = n;
            i++;
        } else {
            printf("Il valore inserito non è pari. Riprova.\n");
        }
    }
}

// Funzione per stampare l'array
void stampaVett(int vett[], int dim, char sep) {
    for (int i = 0; i < dim; i++) {
        printf("%d%c", vett[i], (i == dim - 1) ? '\n' : sep);
    }
}

// Funzione per ordinare l'array con il bubble sort
void bubbleSort(int vett[], int dim) {
    int temp;
    for (int i = 0; i < dim - 1; i++) {
        for (int j = 0; j < dim - 1 - i; j++) {
            if (vett[j] > vett[j + 1]) {
                temp = vett[j];
                vett[j] = vett[j + 1];
                vett[j + 1] = temp;
            }
        }
    }
}

// Funzione per scambiare il valore massimo con il valore minimo
void scambioMinMax(int vett[], int dim) {
    int min = vett[0], max = vett[0];
    int i_min = 0, i_max = 0;

    // Trova gli indici del minimo e del massimo
    for (int i = 1; i < dim; i++) {
        if (vett[i] < min) {
            min = vett[i];
            i_min = i;
        }
        if (vett[i] > max) {
            max = vett[i];
            i_max = i;
        }
    }

    // Scambia i valori
    int temp = vett[i_min];
    vett[i_min] = vett[i_max];
    vett[i_max] = temp;
}

int main() {
    int scelta;

    if (DIM <= 0) {
        printf("La dimensione dell'array deve essere maggiore di 0.\n");
        return 1;
    }

    int vettore[DIM];

    do {
        printf("\nMenu:\n");
        printf("1) Caricare un array con soli valori pari\n");
        printf("2) Stampare l'array\n");
        printf("3) Ordinare l'array con il bubble sort\n");
        printf("4) Scambiare il valore massimo con il valore minimo\n");
        printf("5) Esci\n");
        printf("Scegli un'opzione: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                richiediValori(vettore, DIM);
                break;
            case 2:
                stampaVett(vettore, DIM, '-');
                break;
            case 3:
                bubbleSort(vettore, DIM);
                printf("Array ordinato con successo.\n");
                break;
            case 4:
                scambioMinMax(vettore, DIM);
                printf("Scambio effettuato con successo.\n");
                stampaVett(vettore, DIM, '-');
                break;
            case 5:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Opzione non valida. Riprova.\n");
        }
    } while (scelta != 5);

    return 0;
}