/* stampa i primi n numeri dispari successivi al numero A
ES: a=5 e n=8
da stampare = 7,9,11,13,15,17,19,21
ES2: a=4 e n=8
da stampare = 5,7,9,11,13,15,17,19
*/

#include <stdio.h>
int main(){
int n=0,a=0;
do{
printf("inserisci un numero A: ");
scanf("%d", &a);
printf("inserisci un numero N: ");
scanf("%d", &n);
}while(n<0 || a<0);
    a++;
    for(int i=1; i<=n; i++){
        if(a%2!=0)
            printf("%d-",a);
                else i--;
                    a++;

}






}