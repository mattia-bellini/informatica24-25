/*determina l'area,il circonferenza e il raggio di un cerchio*/
#include <stdio.h>
const float pi= 3.14;
void area(float _r,float *_a);
void circonferenza(float _r, float *_c);
int main(){
float r,c,a;
    do{
        printf("inserisci il raggio: ");
        scanf("%f", &r);
    }while(r<=0);
area(r,&a);
circonferenza(r,&c);
printf("la circonferenxa vale %.2f,l'area vale %.2f",c,a);
}
void area(float _r,float *_a){
*_a=pi*(_r*_r);
}
void circonferenza(float _r, float *_c){
*_c=2*pi*_r;
}
