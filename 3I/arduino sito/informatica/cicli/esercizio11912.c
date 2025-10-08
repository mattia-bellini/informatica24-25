/*dato  un numero N calcolare il suo quadrato sommando i primi N numeri dispari 
ES:n=7 7^2=49
1 3 5 7 9 11 13 =49
*/
#include <stdio.h>
int main(){
int n=0,quadrato=0,r=1;
do{
    printf("inserisci un numero: ");
    scanf("%d", &n);

}while(n<0);
for(int i=0;i<n;i++){
    quadrato+=r;
    printf("%d+", r);
    r+=2;
}printf(" il quadrato di %d è %d", n,quadrato);
}