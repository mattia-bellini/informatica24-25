/*    Dichiarare un array di libri di dimensione massima N
    Consentire l'inserimento dei dati di un libro.
    Aggiornare correttamente il numero di copie disponibili.
    Registare il prestito di un libro:
        -inserendo la data di un prestito e la data di restituzione
        -decrementando il numero di copie disponibili
        -impedendo il prestito se non ci sono copie disponibili
    Visualizzare l'elenco completo dei libri con tutte le informazioni
    Visualizzare solo i libri attualmente in prestito(copie disponibili<copie totali)
    Cercare un libro tramite ISBN
    Stampare solo i libri con prestito scaduto
    Vincoli: accedere ai campi delle date tramite struct annidata
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Data {
    int giorno;
    int mese ;
    int anno
}data;

typedef struct Libro {
    char titolo [20];
    char autore [20];
    int isbn;
    int copie_totali;
    int copie_disponibili;
    data data_prestito;
    data data_restituzione;
}libro;
I

Libro* InserisciLibro(Libro* L, int* n){

L=(Libro*)realloc(L,)
L=(libro*)realloc(L,((*n)+1)*sizeof(libro));
if(L==NULL){
    printf("errore di allocazione\n");
    exit(1);

printf("Inserisci titolo: ");
fgets(L[*n].titolo, 100, stdin);
L[*n].titolo[strespn(L[*n].titolo, "\n")] = '\0';
printf("Inserisci autore: ");
fgets(L[*n].autore, 100, stdin);
L[*n].autore[strcspn(L[*n].autore, "\n") ] = '\0';
printf("Inserisci isbn: ");
scanf("%d", &L[*n].isbn);

printf("Inserisci le copie totali: ");
scanf("%d", &L[*n].copie_totali);
L[*n].copie_disponibili= L[*n].copie_totali;
L[*n].data_prestito.giorno = 0;
L[*n].data_restituzione.giorno = 0;

(*n)++;
//getchar();
return L;|
}

void stampa(libro *l, int n){
    for(int i =0;i<n;i++){
    printf("\nTitolo: %s", L[i].titolo);
printf("\nAutore: %s", L[i].autore);
printf("\nISBN: d", L[i].isbn);
printf("\nCopie totali: %d", L[i].copie_totali);
printf("\nCopie disponibili: %d", L[i].copie_disponibili);
printf("\nData prestito: %d/%d/%d", L[i].data_prestito.giorno, L[i].data_prestito.giorno, L[i].data_prestito;
printf("\nData restituzione: %d/%d/%d", L[i].data_restituzione.giorno, L[i].data_restituzione.giorno, L;[]


    }
}


int main(){
libro* biblioteca=NULL;
int n=0, scelta;
char c;

do {
printf("\n --- MENU --- \n");
printf("1. Inserisci nuovo libro\n");
printf("2. Visualizza tutti i libri\n");
printf("3. Registra prestito\n");
printf("4. Cerca libro per ISBN\n");
printf("5. Visualizza libri in prestito\n");
printf("6. Stampare il libro con il prestito scaduto\n");
printf("0. Esci\n");
printf("Scelta: ");
scanf("%d", &scelta);
while((c = getchar()) != '\n') {} 
}while(scelta!=0);


switch(scelta){

    case 0:{
    printf("esci dal programma\n");
    break;
}
    case 1:{
        biblioteca=inseriscilibro(biblioteca,&n);
        break;
    }
    case 2:{
        stampa(biblioteca,n);
        break;
    }

}

















}



