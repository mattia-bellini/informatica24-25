#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef char* string;
void compatta(string buffer, int len){
    if(len>&&buffer[len-1]=='\n'){
        buffer[len-1]='\0';
        len--;
    }
}

int conteggio(string _frase){
    int cnt=0;
    for(int i=0; _frase[i]!='\0'; i++){
        char c=tolower(_frase[i]); //tolower conforonta ogni carattere in minuscolo per confrontare facilmente con le vocali 
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    char buffer[200];
    string frase=NULL;

    printf("inserisci una stringa:");
    fgets(buffer, sizeof(buffer), stdin);
    int len=strlen(buffer);
    compatta(buffer, len);
    frase=(string)malloc((len+1)*sizeof(char));

    if(frase==NULL){
        printf("Errore di allocazione\n");
        return 1;
    }
    strcpy(frase, buffer); //copia una stringa in un'altra
    printf("il numero delle vocali e': %d", conteggio(frase));
    free(frase);
    return 0;
}