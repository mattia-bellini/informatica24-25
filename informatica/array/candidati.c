/*GENERARE LE RISPOSTE FORNITE DAI CANDIDATI ALL'INTERNO DELLA MATRICE 											
O IN MODO MANUALE O GENERARLI CASUALMENTE CON VALORI COMPRESI TRA 1 E 4											
L'ARRAY CORRETTORE CONTIENE LE RISPOSTE CORRETTE (QUINDI SEMPRE CON VALORI 											
COMPRESI TRA 1 E 4)											
BISOGNA CONFRONTARE LE RISPOSTE DATE DA OGNI CANCIDATO CON QUELLE CORRETTE 											
E INSERIRE IL NUMERO DELLE RISPOSTE CORRETTE NELL'ARRAY RISULTATI		
*/									



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void caricaMatrice(int mat[17][10],int max, int min);
void StampaMatrice(int mat[17][10]);
void caricaVett(int vett[10], int max, int min);
void stampaVett(int vett[10]);
void caricaVett1(int vett1[17], int mat[17][10], int vett[10]);
void stampaVett1(int vett1[17]);



int main(){
    srand(time(NULL));
    int mat [17][10];
    int vett[10];
    int vett1[17];
    int max=4;
    int min=1;





    return 0;
}