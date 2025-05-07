//DATO UN ARRAY CALCOLARE QUANTI VALORI PARI E QUANTI VALORI DISPARI;

#include<stdio.h>
#define DIM 10

int main(){
int vett[DIM]={1,4,10,35,8.22,3,7,9,11,13};
int pari=0;
int dispari=0;

for(int i=0; i<DIM;i++){
if(vett[i]%2==0){
    pari++;
}
else{
    dispari++;
}
}
printf("I numeri pari sono %d e i numeri dispari sono %d",pari,dispari);
return 0;
}