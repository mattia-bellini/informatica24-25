/*Dato un numero stampare tutti i suoi divisori*/

#include<stdio.h>
    
    int main(){
    
    int num,div;
    div=2;
    printf("inserisci un numero: ");
    scanf("%d", &num);

    while(div<=num/2){
        if(num%div==0)
            printf("%d è u divisore di %d\t", div,num);
        div++;
    }
    printf("1\t",num);










return 0;
}