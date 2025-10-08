//DATO UN ARRAY ESEGUIRE LA MEDIA DEI SUOI VALORI;


#include<stdio.h>
#define DIM 5;
void calcolaMedia(int vett[], int dim, float *media){
    int somma=0;
    for(int i=0; i<dim; i++){
        somma+=vett[i];
    }
    *media=(float)somma/dim;
}
//DATO UN ARRAY CALCOLARE LA SOMMA DEI SUOI VALORI;                                                     
int main(){
calcolaMedia(int vett[], int dim, float *media);
    int vett[DIM]={1,4,10,35,8};
    float media;
    calcolaMedia(vett,DIM,&media);
    printf("La media dei valori dell'array è: %.2f\n", media);
    return 0;

}