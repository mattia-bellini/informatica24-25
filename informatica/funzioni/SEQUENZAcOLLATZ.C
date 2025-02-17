#include <stdio.h>

void sequenzaCollatz(int *_n);

int main(){
    int n,lgg=0;
    do{
        printf("inserisci un numero: ");
    }while(n<0);
    printf("la sequenza di %d e\' : ", n);
while(n!=1){
            sequenzaCollatz(&n);//calcola il nuovo valore della sequenza 
            printf("\n%d",n);
            lgg++;
}
return 0;
}
void sequenzaCollatz(int *_n){
     if( (*_n)%2==1)
     (*_n)=(*_n)*3+1;
     else
     (*_n)=(*_n)/2;
     }
     