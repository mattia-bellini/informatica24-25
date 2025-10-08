/*Scrivi un programma che visualizzi la somma dei quadrati
 dei primi 12 numeri naturali successivi a 8
 ES:9x9+10x10+11x11+12x12+13x13........
 */
 #include <stdio.h>
 int main(){
    int inizio,somma=0,quantita=0;
     printf("inserisci il valore iniziale: ");
    scanf("%d", &inizio);
    do{
  printf("inserisci il numero di elementi: ");
    scanf("%d", &quantita);
    }while(quantita<=0);

        for(int i=inizio+1;i<inizio;i<inizio+quantita;i++){
        somma+=i*i;
        }

printf("la somma dei %d valori da %d vale: %d", quantita,inizio,somma);

        
            













 }