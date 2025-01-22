/*
Calcolare la somma dei primi N numeri naturali (N è un numero scelto dall'utente maggiore di 2).
 (esempio se N=3, mostrare il risultato di 1+2+3. se N=5, mostrare 1+2+3+4+5)
*/

#include <stdio.h>
int main(){
int n,sum=0;
do{
printf("inserisci un numero: ");
scanf("%d",&n );
}while(n<=2);
for(int i=1;i<=n;i++){
    sum+=i; 

printf("%d+", i);
}
printf("la somma è %d", sum);


return 0;

}