/*trovare la sottostriga senza utilizzare la librera string.h*/
#include <stdio.h>

int lunghezza(char *s) {
    int len=0;
    while(s[len]!='\0') {
        len++;
    }
    return len;
}

int trova_sottostringa(char *testo, char *sottostringa) {
    int len_testo=lunghezza(testo);
    int len_sotto=lunghezza(sottostringa);
    
    for(int i=0; i<=len_testo-len_sotto; i++) {
        int trovata=1;
        for(int j=0; j<len_sotto; j++) {
            if(testo[i+j]!=sottostringa[j]) {
                trovata=0;
                break;
            }
        }
        if(trovata) {
            return i; 
        }
    }
    return -1;
}

int main() {
    char testo[100];
    char sottostringa[100];
    
    printf("Inserisci il testo: ");
    fgets(testo, 100, stdin);
    
    printf("Inserisci la sottostringa da cercare: ");
    fgets(sottostringa, 100, stdin);
    
    int i = 0;
    while(testo[i]!='\0') {
        if(testo[i]=='\n') testo[i]='\0';
        i++;
    }
    i = 0;
    while(sottostringa[i]!='\0') {
        if(sottostringa[i]=='\n') sottostringa[i]='\0';
        i++;
    }
    
    int posizione=trova_sottostringa(testo, sottostringa);
    
    if(posizione!=-1) {
        printf("Sottostringa trovata alla posizione: %d\n", posizione);
    } else {
        printf("Sottostringa non trovata\n");
    }
    
    return 0;
}