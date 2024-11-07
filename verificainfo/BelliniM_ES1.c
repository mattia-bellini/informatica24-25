/*CONTARE IL NUMERO DI CIFRE DI CUI SI COMPONE UN NUMERO DATO E
COMUNICARE QUANTE VOLTE COMPARE LA CIFRA DI VALORE K CHIESTA
ALL’UTENTE.
N.B.: accettare valori che vanno da 0 a 9999
ES: 3 è composto da 1 cifra e supponendo k=5 allora k compare 0 volte, 56 è composto
da 2 cifre e k compare 1 volta*/

#include <stdio.h>

 int main(){
    int numero
    int contatore
    char k=0;
    printf("inserisci il valore: ");
    scanf("%d", &numero);
    prinitf("inserisci il valore k: ");
    scanf("%c", &k);
    

        if(numero>=0   &&  numero<=9999)
            else{
            printf("il numero che hai scelto non è valido");
            }
            
            
 }