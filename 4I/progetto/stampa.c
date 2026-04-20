#include <stdio.h>
#include <string.h>


void stampa_inventario(Inventario* i) {
    if (i == NULL) {
        printf("Inventario vuoto.\n");
        return;
    }

    Oggetto* current = i->next;

    printf("Lista: ");
    while (current != NULL) {
        printf("%d -> ", current->dato);
        current = current->next;
    }
    
}
  





void stampa_stato(Eroe *e){
    printf("\033[31m HP:%D \033[0m\n", eroe->HP);
    printf("||");
    printf("\033[33mXP:%d\033[0m\n", eroe->XP);
    printf("||");
    printf("");
    printf("||");
    printf("");
}
