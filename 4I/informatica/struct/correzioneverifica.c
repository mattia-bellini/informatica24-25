#include<stdio.h>
#include<stdlib.h>



int n=3;

//allochiamo i primi 3 elementi
libri = (struct LIBRO*)malloc(n * sizeof(struct LIBRO));

if (libri == NULL){
printf("errore di allocazione");
return 1;

}

//inseriamo i dati
strcpy(libri[0].titolo, "L'amore mio noin muore");
strcpy(libri[0].autore, "Roberto Saviano");
libri[0].anno = 2025;
libri[0].prezzo =19.50;

strcpy(libri[1].titolo, "L'amore mio noin muore");
strcpy(libri[1].autore, "Roberto Saviano");
libri[e].anno = 2025;
libri[0].prezzo =19.50;
strcpy(libri[1].titolo, "Maledetti di
strcpy(libri[1].autore, "Sven Assel");
libri[1].anno = 1953;
libri[1].prezzo =13;

strcpy(libri[2].titolo, "Il diritto di contal
strcpy(libri[2].autore, "Margot Lee Shetterl:
libri[2].anno = 2017;
libri[2].prezzo =18.5;
//visualizzazione dei dati
printf(" === Lista Libri===\n");
for(i=0;i<n;i++){
printf("libro%d:\n",i+1);
printf(" Titolo: %s:\n", libri[i].titolo);
printf(" Autore: %s:\n", libri[i].autore);
printf(" Anno: %d:\n", libri[i].anno);
printf(" prezzo: %2f:\n", libri[i].prezzo);

}


n+=1;
libri = (struct LIBRO*)realloc(libri, n*sizeof(struct LIBRO));
if (libri == NULL){
printf("errore di allocazione");
return 1;

strcpy(libri[3].titolo, "Orgoglio e premiudizio");
strcpy(libri[3].autore, "Jane Austen");
libri[3].anno = 1813;
libri[3].prezzo = 9;
//visualizzazione dei dati
printf(" === Lista Libri === \n");
for(i=0; i<n; i++){
printf("Libro %d:\n", i+1);
printf(" Titolo: %s:\n", libri[i].titolo);
printf(" Autore: %s:\n", libri[i].autore);
printf(" Anno: %d:\n", libri[i].anno);
printf(" Prezzo: %.2f:\n\n', libri[i].prezzo);
//calcoliamo il libro piu datato 
datato=libri [0].anno;
i_datato=0;
for(i=1; i<n; i++){
if(libri[i].anno< datato){
datato = libri[i].anno;
i_datato = i;

}
printf("Il libro piu\' datato e\': %s ", libri[i_datato].
//calcoliamo il Libro più costoso
costoso = libri[0].prezzo;
i_costoso =0;
for(i=1; i<n; i++){
if(libri[i].prezzo > costoso){
costoso = libri[i].anno;
i_datato = i;

}

printf("Il libro piu\' datato e\': %s\n", libri[i_datato].titolo);
//eliminiamo un libro
printf("Inserisci il titolo del libro da eliminare: ");
fgets(libro,50, stdin);
lun = strlen(libro);
compatta(libro, lun);
for(i=0;i<n;i++){
if( !(strcmp(libri[i].titolo,libro))){
for(j=i;j <(n-1); j++){
strcpy(libri[j].titolo,libri[j+1].titolo);
strcpy(libri[j].autore,libri[j+1].autore);
libri[j].anno = libri[j+1].anno;
libri[j].prezzo = libri[j+1].prezzo;

n -= 1

//reallochiamo il nuovo array
libri = (struct LIBRO*)realloc(libri, n*sizeof(struct LIBRO));|
//reallochiamo il nuovo array
libri = (struct LIBRO*)realloc(libri, n*sizeof(struct LIBRO));
if (libri == NULL){
printf("errore di allocazione");
return 1;

//visualizzazione dei dati
printf(" === Lista Libri === \n");
for(i=0; i<n; i++){
printf("Libro %d:\n", i+1);
printf(" Titolo: %s:\n", libri[i].titolo);
printf(" Autore: %s:\n", libri[i].autore);
printf(" Anno: %d:\n", libri[i].anno);
printf(" Prezzo: %.2f:\n\n", libri[i].prezzo);

free(libri);

