#include <stdio.h>

 int main(){
    int valore1, valore2, valore3, valore4, somma, media;
    float media;
    
    printf("\ninserire il primo  valore: ");
    scanf("%d", &valore1);
    printf("\ninserire il secondo  valore: ");
    scanf("%d", &valore2);
    printf("\ninserire il terzo  valore: ");
    scanf("%d", &valore3);
    printf("\ninserire il quarto valore: ");
    scanf("%d", &valore4);
    somma=valore1+valore2;
    media=somma/2;
    if(somma>200)
    printf("\nla somma supera 200 e la mediaè %.2f", &media);
    else{
        printf("\ninserire il terzo valore");
        somma=valore1+valore2+valore3;
        media=somma/2;
        
        if(somma>200)
        printf("\ni primi tre valori superano 200 e la loro media è %.2f", &media);
        else{
            printf("\ninserire il quarto valore");
        somma=valore1+valore2+valore3+valore4;
        media=somma/2;
        if(somma>200);
        printf("\ni quattro valori superano 200 e la loro media è %.2f", &media);
        }
    }
else
    printf("i quattro valori non superano 200); 


 }