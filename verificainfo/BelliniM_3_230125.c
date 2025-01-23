/*Dato un numero comunicare il numero di cifre di cui è composto e sommarle; verificare inoltre se la
somma è multiplo di 3 di 5 oppure di 7.*/
#include <stdio.h>
int main(){
int n,cnt=1,som=0,r=0,q;
do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    q=n;
    for(int i=1;i<=n;i++){
r=q%10;
q=q/10;
cnt++;
som+=r;
printf("somma: ");
scanf("%d" ,&som);
if(som%3==0)
printf("il numero è multiplo di 3");
else if(som%5==0){
printf("il numero è multiplo di 5");}
else if (som%7==0){
printf("il numero è multiplo di 5");}
}while(n<=0);

   
}
}
