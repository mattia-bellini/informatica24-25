#include <stdio.h>

        int main(){
            int num, cifra;
            num=0;
            cifra=0;

        
            printf("inserire un numero: ");
            scanf("%d", &num);

            cifra=num%10;

            if(cifra%2==0)
                printf("il numero %d è pari", num);

                else

                printf("il numero %d è dispari", num);


















}