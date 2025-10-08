/*calcolare il fattoriale di un numero */
#include <stdio.h>
long fattoriale(int _n);
int main(){
int n=0, somf=1;
 
do{
    printf("inserisci un valore: ");
    scanf("%d", &n);
}while(n<=0);
somf=fattoriale(n);
printf("%d",somf);
}
long fattoriale(int _n){
    long _somf=1;
    int  i;
    for(i=1;i<=_n;i++){
        _somf*=i;
    }
    
return _somf;


}