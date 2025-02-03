/*dato un valore eseguire la conversione da decimale
 a binario*/

#include <stdio.h>

long  converti(int _num);  //formale

int main(){
int num;
long conv;
do{
printf("Inserisci un numero: ");
scanf("%d", &num);
}while(num<=0);
conv=converti(num);
printf("%ld\n", _conv);
}
long  converti(int _num){                   
int quoz=0,resto=0,cnt=0;
int _conv=0;
quoz=_num;
while(quoz!=0){
resto=quoz%2;
quoz=quoz/2;
_conv=pow(10,cnt);
cnt++;
}
return _conv;
}