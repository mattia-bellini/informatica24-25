/*
creare un array dimanico chiedendo all'utente la sua dimensione 
il programma deve prevedre le seguenti funzioni:
1. crea l'array
2. inserire gli lementi nell'array
3. stampa dei valori 
4. esci
*/

#include<stdio.h>
#include<stdlib.h>

int*creaVett(int _n){
    
    int* _vettore=(int*)malloc(_n*sizeof(int))
    if(vettore==NULL){
        printf("Errore di allocazione!\n");
                return 1;

    }
 return _vettore;
}

int*inseriscivalori(int*vettore, int_n){

for(int i=0, i<_n,i++){
    printf("inserisci l'elemento: ");
    scanf("%d", &_vettorre[i]);
}
return _vettore;
}

void stampaVett(int*_vettore, int _n){
    printf("hai inserito i seguenti elementi ");
    for(int i=0, i<_n,i++){
        printf("%d\t", _vettore[i]);


    }

}

int main(){

 int *vettore=NULL; //puntatore al vettore
 int n;

 do{
 printf("inserisci la quantità degli elementi: ");
 scanf("%d", &n);

 }while(n<0)

 vettore=creaVett(n);
 vettore=insericiValori(vettore,n);
stampaVett(vettore,n);


free(vettore);





}






