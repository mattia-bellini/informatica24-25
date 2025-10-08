#include <stdio.h>
#include "libreria.h"
#include "libreria.c"

int main(){
int vett[10];

riempiVettoreCasuale(vett,10,0,150000);
stampaVettore(vett,10,'-');
bubbleSort(vett,dim);
printf("\n");
stampaVettore(vett,10,'-');


}

