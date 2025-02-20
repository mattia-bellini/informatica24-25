/*
dato un valore stampare i suoi fattori
ES: 28=2x2x7    2,2,7
*/
#include <stdio.h>

void calcolofattori(int _num, int _fatt);

int main(){
int fatt=0,num;
do{
    printf("inserisci un numero: ");
    scanf("%d", &num);
}while(num<0);
calcolofattori(num,fatt);
 
}

void calcolofattori(int _num, int _fatt){
for(int i=2;i<=_num;){
    if(_num%i==0){
        _num/=i;
        _fatt=i;
        printf("%d\n",_fatt);
    }
else
i++;
}
}