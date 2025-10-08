/*
dati due vettor caricati casualmente 
eseguire uno scambio di valori
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libreria.h"

#define DIM 4

int main(){
srand(time(NULL));
int v1[DIM]={0};
int v2[DIM]={0};
caricaCasuale(v1,DIM,10,50);
caricaCasuale(v2,DIM,10,50);
scambiovettori(v1,v2,DIM);
stampaVett(v1,DIM,'-');

}