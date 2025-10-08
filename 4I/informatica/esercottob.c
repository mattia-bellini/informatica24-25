/*scrivi un programma in c che:
1.chiede all'utente quanti numeri interi vuole inserire
2.alloca dinamicamente un array di quella dimensione con malloc
3.permette all'utente di inserire numeri
4. chiede all'utente se vuole aumentare la dimensione dell' array:
-se si, richiede la nuova dimensione e usa realloc per ridimensionarlo 
-permette quindi di inserire i nuovi valori negli spazi aggiunti 
5. infine stampa tutti gli elementi dell'array 
*/
#include <stdio.h>
#include <stdlib.h> 



int* inserisci_valori(int *array, int inizio, int fine) {
	for (int i = inizio; i < fine; i++) {
		printf("Inserisci il valore per l'elemento %d: ", i + 1);
		scanf("%d", &array[i]);
	}
}


void stampa_array(int *array, int dim) {
	printf("\nElementi dell'array:\n");
	for (int i = 0; i < dim; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
int* ridimensiona_array(int *array, int nuova_dim) {
	int *tmp = realloc(array, nuova_dim * sizeof(int));
	if (tmp == NULL) {
		printf("Errore di realloc!\n");
		
	}
	return tmp;
}
















