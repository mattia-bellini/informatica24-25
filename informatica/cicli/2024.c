/*dati in input 10 numeri interi determinare il vcalore maggiore e quante voltte compare
*/

#include <stdio.h>
int main(){
    
int num=0,max=0,cnt=0;
for(int i=0; i<10; i++){
    printf("inserisci un numero: ");
    scanf("%d",&num);
     
    if (num>max){
            max = num;
            cnt=1;
        }
         else if(num==max)
            cnt++;
}
printf("il numero maggiore è %d, e compare  %d volte", max,cnt);
}




