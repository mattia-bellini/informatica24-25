/*
sviluppiamo le funzioni 
*/
#include <stdio.h>
#include "libreria.h"//prototipi delle funzioni

void richiediValori(int vett[],int dim){

int n=0;

for(int i=0; i<dim;i++){
    printf("inserisci valore: ");
    scanf("%d",&n);
    if(n%2==0)
    vett[i]=n;

}
return 0;
}
stampaVett(int vett,int dim,char sep){
    for (int i=0;i<dim;i++){
        printf("%d%c"vett[i], sep);
    }
}