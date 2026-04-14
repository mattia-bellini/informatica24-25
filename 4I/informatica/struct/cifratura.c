/*
data una stringa iniziale e il fattore
 di cifratura creare la stringa cifrata con tabella ascii
 fattore di cifratura da chiedere all'utente e anche lo spazio deve venire cifrato
 */ 


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string cifra(string s, int n){
    int len=strlen(s);
    string cifratura=malloc(len+1);
    for(int i=0;i<len;i++){
        cifratura[i]=s[i]+n;
    }
    cifratura[len]='\0';
    return cifratura;
}

string decifra(string s, int n){
    int len=strlen(s);
    string decifratura=malloc(len+1);
    for(int i=0;i<len;i++){
        decifratura[i]=s[i]-n;
    }
    decifratura[len]='\0';
    return decifratura;
}

int main(){
    char buffer[200];
    int fattore;
    
    printf("inserisci una stringa da cifrare: ");
    fgets(buffer, 200, stdin);
    printf("inserisci il fattore di cifratura: ");
    scanf("%d", &fattore);
    
    string frase=malloc(strlen(buffer)+1);
    strcpy(frase, buffer);
    
    string cifrata=cifra(frase, fattore);
    printf("la stringa cifrata e': %s\n", cifrata);
    
    string decifrata=decifra(cifrata, fattore);
    printf("la stringa decifrata e': %s\n", decifrata);
    
    free(frase);
    free(cifrata);
    free(decifrata);
    return 0;
}


