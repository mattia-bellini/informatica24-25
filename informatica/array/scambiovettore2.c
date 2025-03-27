#include <stdio.h>  
#include <stdlib.h> 

#define DIM 10
void scambio();
int main() {
    scambio();
    return 0;
}
void scambio() {
    int vettore1[DIM];
    int vettore2[DIM];

    for (int i = 0; i < DIM; i++) {
        printf("Inserisci un valore per vet1: ");
        scanf("%d", &vettore1[i]);
    }
    printf("\n");
    for (int i = 0; i < DIM; i++) {
        printf("Inserisci un valore per vet2: ");
        scanf("%d", &vettore2[i]); 
    }
    printf("\n");
    for (int i = 0; i < DIM; i++) {
        int temp = vettore1[i];
        vettore1[i] = vettore2[i];
        vettore2[i] = temp;
    }
    printf("Valori di vet1 dopo lo scambio:\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", vettore1[i]);
    }
    printf("\n");
    printf("Valori di vet2 dopo lo scambio:\n");
    for (int i = 0; i < DIM; i++) {
        printf("%d ", vettore2[i]);
    }
    printf("\n");
}