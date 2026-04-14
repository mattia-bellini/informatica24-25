/*registrare le informazioni di alcuni libri tipo autore anno pubblicazione.con struct
caricare array
visualizzare
rimuovere libro
cercare libro in base al titolo
*/

#include<stdio.h>
#include<stdlib.h>

#define MAX_LIBRI 50
#define MAX_TITOLO 50
#define MAX_AUTORE 50

typedef struct Libro {
    char titolo[MAX_TITOLO];
    char autore[MAX_AUTORE];
    int anno;
};
typedef struct libreria{
   Libro libri[MAX_LIBRI];
}