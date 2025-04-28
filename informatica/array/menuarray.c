/*
Creiamo un menu:
1)caricare un array con soli valori pari
2)stampare l'array
3)ordina l'array con il bubble sort
*/

#include <stdio.h>
#define DIM 5


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


void stampaVett(int vett[], int dim, char sep) {
    for (int i = 0; i < dim; i++) {
        printf("%d%c", vett[i], (i == dim - 1) ? '\n' : sep);
    }
}


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
        printf("4) Esci\n");
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
                break;
            case 4:
                printf("Uscita dal programma\n");
                break;
            default:
                printf("Opzione non valida. Riprova.\n");
        }
    } while (scelta != 4 && scelta!=0);

    return 0;
}