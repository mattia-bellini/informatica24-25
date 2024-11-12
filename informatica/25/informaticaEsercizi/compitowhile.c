/*scrivi un programma che chieda all'utente un numero che sia necessariamente maggiore di 3 e che indica quanti valori della sequenza di fibonacci mostrare.
Per esempio se l'utente inserisce 6 dovranno essere mostrati 1 1 2 3 5 8.
Vedi pag 160*/

#include <stdio.h>

int main(){
int num=0,conta,fib1=0,fib2=0,fib3=0,fib4;
printf("\nsequenza di fibonacci");
printf("\ninserisci un numero: ");
scanf("%d", &num);

while(num<3){
    printf("hai inserito un numero non valido");
    printf("\ninserisci un numero: ");
    scanf("%d", &num);
}


fib1=1;
fib2=1;
fib3=0;
printf("%d", fib1);
printf("%d", fib2);
conta=3;
    while(conta<num){
        fib4=fib1+fib2;
        printf("%d", fib3);
        fib1=fib2;
        fib2=fib3;
        fib3=fib4;
    }


    return 0;
}