/*data una stringa inserita dall'utente creare la stringa all' inverso scambiando gli elementi*/
#include <stdio.h>
#include <string.h>

typedef char* stringa;

stringa inverti(stringa s) {
    int len = strlen(s);
    for(int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    return s;
}

int main() {
    char buffer[100];
    
    printf("Inserisci una stringa: ");
    fgets(buffer, 100, stdin);
    
    stringa originale = buffer;
    stringa invertita = inverti(originale);
    
    printf("Stringa invertita: %s", invertita);
    
    return 0;
}