//commento su una riga
/*ESERCIZIO
calcola il perimetro di un rettangolo
dati i valori della base e dell'altezza
*/
#include <stdio.h>

int mian(){	
float base,altezza,perimetro;

	base=0;
		altezza=0;
	perimetro=0;
	
	printf("inserisci il valore della base");
	scanf("%f", &base);
	printf("inserisci il valore dell'altezza");
	scanf("%f", &altezza);
	perimetro=2*(base+altezza);
	printf("il valore del perimetro vale: %f",perimetro);
	

}