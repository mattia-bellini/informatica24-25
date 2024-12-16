/*dati N numeri in input (con N chiesto all'utente strettamente maggiore di 5 ), calcolare
e mostrare la somma dei numeri negativi e positivi*/

#include <stdio.h>

int main(){
int n,num,sommaP=0,sommaNG=0;
do{
    printf("inserisci il numero di valori che vengano inseriti: ");
        scanf("%d",&n);
}   while(n<=5);

for(int i=0;i<n; i++){
    printf("inserisci un numero: ");
        scanf("%d", &num);
    if(num<0)
        sommaNG+=num;
     else 
        sommaP+=num;
}
    printf("il numero della somma dei numeri positivi è %d,\n mentre la somma di quelli negativi è %d", sommaP,sommaNG);
    return 0;
}