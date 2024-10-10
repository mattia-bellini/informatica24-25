#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    int sequenza_valida = 1;

    printf("Inserisci 5 numeri interi:\n");

    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);
    printf("Numero 3: ");
    scanf("%d", &n3);
    printf("Numero 4: ");
    scanf("%d", &n4);
    printf("Numero 5: ");
    scanf("%d", &n5);

    if (n2 - n1 != 1) {
        sequenza_valida = 0;
    } else if (n3 - n2 != 1) {
        sequenza_valida = 0;
    } else if (n4 - n3 != 1) {
        sequenza_valida = 0;
    } else if (n5 - n4 != 1) {
        sequenza_valida = 0;
    }

    if (sequenza_valida) {
        printf("La sequenza inserita e' una sequenza naturale valida.\n");
    } else {
        printf("La sequenza inserita non e' una sequenza naturale valida.\n");
    }

    return 0;
}