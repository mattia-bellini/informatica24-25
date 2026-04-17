#include <stdio.h>
#include <string.h>


void stampa_inventario(Pila* inventario){
 if (inventario->top == NULL) {
        printf("Pila vuota\n");
        return;
    }
    
    printf("Pila (dall'alto): ");
    Nodo* current = pila->top;
    
    while (current != NULL) {
        printf("[%d] ", current->dato);
        current = current->next;
    }
    printf("\nLunghezza: %d\n", pila->lunghezza);
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
