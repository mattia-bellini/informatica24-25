#include <stdio.h>

int main(){
    int num, min , cnt=0;

    do{
        printf("inserisci un numero: ");
        scanf("%d", &num);
        cnt++;
        if(num<min || cnt==1)
            min=num;

    }while(num != 0);
    printf("\nil programma è terminato");
    
    printf("\nil valore minimo inserito é %d ",min);
}