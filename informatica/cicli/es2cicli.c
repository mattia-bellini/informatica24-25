/*
leggere una sequenza di numeri,visualizzarla.
si termina non appena arriva uno 0
*/



#include <stdio.h>

int main(){
    int num;
    printf("inserisci un numero: ");
    scanf("%d", &num);
    

    while(num!=0){
        
        printf("il valore inserito è: %d", num);
        printf("inserisci un numero: ");
        scanf("%d", &num);
    }
    printf("hai inserito 0,hai terminato il programma");

    return 0;
}