/*(Numero perfetto la somma dei suoi divisori escluso se stesso,
 la somma è uguale al numero)
 scrivi un programma che ricerca i primi tre numeri perfetti e il visualizza
sullo schermo
ES:
n=6 div=1-2-3 somma =1+2+3=6
primi tre numeri perfetti= 6-28-496
 */
#include <stdio.h>
int main(){
    int somma=0;
    for(int i=1;i<500;i++){
        for( int j=1;j<i;j++){
        if(i%j==0)
            somma+=j;
    }
    if(i==somma)
    printf("%d , ",somma);
    somma=0;
 }

}