/*
caricato un vetrtore con valori random 
calcolare la media
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.c"




int main() {
    int v[31];
    srand(time(NULL));
    for (int i = 0; i < 31; i++) {
        v[i] = rand() % 101;
        printf("%d ", v[i]);
        float calcolamedia(int v[], int n);
    }

    printf("\nMedia: %f\n", calcolamedia(v, 31));
    return 0;
}