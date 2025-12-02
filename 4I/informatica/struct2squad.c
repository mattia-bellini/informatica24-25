/*creare una struct squandra contenente le seguenti informazioni:
nome , colore ,punteggio.
caricato un massimo di 10 squandre stampare quelle con punteggio superiore a 100*/
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char colore[30];
    int punteggio;
} Squadra;

void stampa(Squadra *teams, int n){
    int i;
for(i=0; i<n; i++) {
printf ("nome squadra: %s\n", teams[i].nome);
printf ("colore squadra: %s\n", teams[i].colore);
printf("punteggi: %s\n", teams [i].punteggio);
}


int main(){
Squadra *teams;
int n,i;
do{
    printf("inserisci il numero delle squadre(max10): ");
    scanf("%d", &n);
}while(n<0 || n>10);

teams= (Squadra*)malloc(sizeof(squadra));
if(teams==NULL)
printf("errore durante l'allocazione");
return 1;
}
for(i=0;i<n;i++){
printf("inserisci il nome della squadra: ");
scanf("%s", teams[i]->nome);
fflush(stdin);
printf("inserisci il colore della squadra: ");
scanf("%s", teams[i]->colore);
fflush(stdin);
printf("inserisci il punteggio della squadra: ");
scanf("%s", &(teams[i].punteggio));
fflush(stdin);

}