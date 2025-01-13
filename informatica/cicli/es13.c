/*Scrivi un programma che esegue il calcolo
 del fattoriale di un numero num inserito.
 es=
 5 fattoriale->1*2*3*4*5
*/
#include <stdio.h>
int main(){
    int num,facts=1;
    printf("inserisci un numero: ");
    scanf("%d", &num);
    for(int i=1; i<=num ;i++){
         facts*=i;
    }
    printf("il calcolo del fattoriale di %d è %d", num,facts);


        





}