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
    
    switch(current->tipo){
        case POZIONE:
        printf("Pozione con cura %d\n", current->val);
        break;
        case ARMA:
        printf("Arma con danno %d\n", current->val);
        break;  
        case ARMATURA:
        printf("Armatura con difesa %d\n", current->val);   
        case CHIAVE:
        printf("Questa chiave sblocca una porta %d\n", current->val);
        break;
        case torcia:
        printf("Questa torcia ti permette di vedere al buio\n",current->val);
        break;
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

TipoOggetto tipo_oggetto(char input){
    if(strcmp(input, "pozione") == 0)
        return POZIONE;
    else if(strcmp(input, "arma") == 0)
        return ARMA;
    else if(strcmp(input, "armatura") == 0)
        return ARMATURA;
    else if(strcmp(input, "chiave") == 0)
        return CHIAVE;
    else if(strcmp(input, "torcia") == 0)
        return TORCIA;
}
