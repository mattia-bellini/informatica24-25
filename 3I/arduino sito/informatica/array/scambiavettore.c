/*dati due vettori v1 e v2  ,fare lo scambio di elementi tra due vettori*/
#include <stdio.h>
#include "libreria.c"
#include "libreria.h"
#define DIM 5 

int main(){
int v1[DIM];
int v2[DIM];
 riempiVettoreCasuale( v1, v2, DIM, 0, 10);
 scambiavettori(v1,v2,DIM);
 
 


}

