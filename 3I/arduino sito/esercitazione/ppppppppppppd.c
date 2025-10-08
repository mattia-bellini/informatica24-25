/* Scrivi un programma che effettua il prodotto tra due numeri 
 utilizzando il metodo delle somme successive dopo aver controllato l’input e accettato solo valori maggiori di 0*/

#include <stdio.h>
int main(){
int n,n2, som=0;
do{
    printf("inserisci il primo numero: ");
    scanf("%d", &n);
    printf("inserisci il secondo numero: ");
    scanf("%d", &n2);
}while(n<0 || n2<0);
for(int i=1;i<=n;i++){
    som=som+n2; 
}
printf("la somma è:%d", som);







}