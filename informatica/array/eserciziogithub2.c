/*Dato
un vettore numerico di N posizioni al primo elemento dispari stampare
quanti valori diversi da zero si sono incontrati, il numero dispari
incontrato e la sua posizione nel vettore;*/

#include <stdio.h>
#include<stdlib.h>
#define DIM 6

void caricaVettore(int vett[],int dim ){
int i=0;
printf("Inserisci i valori: ");
	for(i=0;i<dim;i++){
		scanf("%d\n",&vett[i]);
	}	
}
void StampaVettore(int vett[],int dim){
int i=0;
printf("il vettore e\' composto da: ");
     for(i=0;i<dim;i++){
         printf("%d\t",&vett[i]);

    }
void ContaPosizione(int vett[],int dim){
int i=0; int cnt=0;
    while(vett[i]%2!=1 && i<dim, cnt){
        if (vett[i]!=0){
             cnt++;
             i++;
        }
        if(vett[i]%2==1){
        printf("il valore dispari è %d nella posizione %d",vett[i],i );
        printf("\nsono stati incotrati %d valori", cnt);
        }
    }

}
int main(){
int vett[DIM];
caricaVettore(vett,dim);
StampaVettore (vett,dim);
ContaPosizione( vett, dim);
}