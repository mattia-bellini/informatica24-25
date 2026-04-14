/*esempio di utilizzo di una struttura complessa*/
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char nome[20];
    char cognome[20];
    int eta
}Persona;
int main(){
Persona p1;
Persona *p2;

//inseriamo le informazioni in p1
printf("inserisci il nome della persona: ");
scanf("%s", p1.nome);
fflush(stdin);
printf("inserisci i lcognome della persona: ");
scanf("%s", p1.cognome);
fflush(stdin);
printf("inserisci l'eta della persona: ");
scanf("%s", &(p1.eta));
fflush(stdin);

print("dati persona: %s %s %s", p1.nome,p1.cognome,p1.eta);

}
