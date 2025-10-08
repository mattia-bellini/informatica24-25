/*Caricare
da tastiera un vettore di N elementi. Scorrendo il vettore, al primo
zero incontrato stampare la somma di tutti gli elementi considerati e
il loro numero;*/
#include <stdio.h>
#include<stdlib.h>
#define DIM 6
void caricaVettore(int vett[],int dim ){
	int i=0;
	printf("Inserisci un elemento: ");
	for(i=0;i<dim;i++){
		scanf("%d\n",&vett[i]);
	}	
}
int SommaVettore(int vett[],int dim, int *_cnt){
	int somma=0,i=0,cnt=0;
	while(vett[i]!=0 && i<dim){
		somma+=vett[i];
		i++;
		*_cnt++;
		
	}
	return somma;
	
	
	
}
void StampaVettore(int vett[],int dim){
		int i=0;
	printf("il vettore e\' composto da: ");
	for(i=0;i<dim;i++){
		printf("%d\t",&vett[i]);
	
}
int main(){
int vett[DIM]={0};
int sommavett=0;
int cnt=0;

//si carica il vettore
caricaVettore(vett,DIM);
sommavett=SommaVettore(vett,DIM,&cnt);
StampaVettore(vett,DIM);
printf("I %d elementi sommati valgono: %d",cnt,sommavett);

}
}