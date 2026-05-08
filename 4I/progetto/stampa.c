#include <stdio.h>
#include <string.h>


typedef struct Oggetto{
    TipoOggetto tipo;
    int val;
    struct Oggetto* next;
}Oggetto;

typedef struct Mostro{
    TipoMostro tipo;
    int HP;
    int XP;
    int danno;
    struct Mostro* next;
}Mostro;

typedef struct Stanza{
    struct Stanza* next;
    struct Stanza* nord;
    struct Stanza* sud;
    struct Stanza* est;
    struct Stanza* ovest;
    Oggetto* oggetto;
    Mostro* mostro;
    int ID;
    int numero_nord;
    int numero_sud;
    int numero_est;
    int numero_ovest;
    int valore_oggetto;
}Stanza;


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

/*funzione che descrive la mappa*/

void descriviMappa(Stanza *s){
    switch(s->oggetto->tipo){
        case NO_OGGETTO:
        printf("La stanza è vuota\n");
        break;
        case POZIONE:
        printf("La stanza contiene una pozione, Se sei ferito potrebbe aiutarti a curarti");
        break;
        case ARMA:
        printf("La stanza contiene un'arma, potrebbe aiutarti a sconfiggere i mostri");
        break;
        case ARMATURA:   
        printf("La stanza contiene un'armatura, potrebbe aiutarti a difenderti dai mostri");
        break;
        case CHIAVE:
        printf("La stanza contiene una chiave, potrebbe aiutarti a sbloccare una porta chiusa");
        break;
        case TORCIA:
        printf("La stanza contiene una torcia, potrebbe aiutarti a vedere al buio");
        break;  
        return 0;
    }

       switch(s->mostro->tipo){
        case NO_MOSTRO:
        printf("La stanza è vuota\n");
        break;
        case SCHELETRO:
        printf("La stanza contiene uno scheletro, potrebbe darti fastidio, ma non è molto pericoloso");
        break;
        case GOBLIN:
        printf("La stanza contiene un goblin, non è molto agressivo ma potrebbe toglierti qualche punto vita, stai attento");
        break;
        case DRAGO:   
        printf("La stanza contiene un drago, è molto pericoloso, se non sei abbastanza forte può ucciderti in pochi colpi, stai molto attento");
        break;
        case BOSS:
        printf("La stanza contiene IL BOSS DICARA, è estremamente pericoloso, se non sei abbastanza forte potrebbe codificarti e ucciderti in un colpo solo");
        break; 
        return 0;
    }


