/*Data una sequenza di valori (si termina non appena si inserisce -1) verificare se i divisori dei valori
cadono nell’intervallo [8,38].*/
#include <stdio.h>
int main(){
    int n,t=0;
do{
    printf("inserisci un numero: ");
    scanf("%d", &n);
for(int i=1;i<=n;i++){
    if(n%i==0)
    t=i;
    if(t>8 || t<38){
        printf("il numero è compreso tra 8 e 38");
    }
    else{
        printf("il numero non è compreso tra 8 e 38");

    }
}while(n!=(-1));


    
    
}
}