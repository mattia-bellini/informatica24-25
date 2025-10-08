/*
dati 10 valori stamparli
*/

#include <stdio.h>

int main(){
    int num;
    int cnt=0;

while(cnt<5){
    printf("\ninserisci un numero: ");
    scanf("%d", &num);
    cnt++;
    printf("il valore inserito è: %d", num);
}
   
    return 0;
}