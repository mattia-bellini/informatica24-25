/*
leggere una sequenza di numeri,visualizzarla.
si termina non appena arriva uno 0
e determinare quanti numeri sono stati inseriti 
*/



#include <stdio.h>

int main(){
    int num;
    int cnt=0;
    
    
    while(num!=0){
        printf("\ninserisci un numero: ");
        scanf("%d", &num);
        printf("\nil valore inserito è: %d", num);
        cnt++;
    }
    printf("\nhai inserito 0,hai terminato il programma\nhai fatto %d tentativi", cnt);

    return 0;
}