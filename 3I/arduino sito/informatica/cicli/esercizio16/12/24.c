/*calcolare la somma dei primi numeri naturali
ES: 5-> 1+2+3+4+5
*/

#include <stdio.h>
int main(){
int n=0, somma=0;
do{
printf("inserisci un numero: ");
scanf("%d",&n);

}while(n<0);
    for(int i=1; i<=n; i++ ){
        somma+=i;
        printf("%d+", i);
    }
    printf("\nla somma dei primi numeri naturali è %d", somma);

}