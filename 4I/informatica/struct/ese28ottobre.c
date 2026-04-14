/*
provare  la libreria string.h per le seguenti operazioni
1. calcolo lunghezza stringa 
2. controllo strinhge uguali 
3. copiare una stringa 
4. cercare un carattere e comunicarqe la frequenza 
5. concatenare due Stringe 
6. ricerca di una stringa nell'altra 
*/

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100





int main(){
    //caalcolo lunghezza coin strlen
  char frase[MAX], frase2[MAX];
  int len1,len2;     

  printf("Inserisci la prima frase: \n");      
  fgets(frase);  
  printf("Inserisci la seconda frase: \n");      
  gets(frase2);   

  len1=strlen(frase);
  len2=strlen(frase2);
      
  if(len1==len2)
       printf("le frasi sono di uguale lunghezza");
  else if(len1>len2)
       printf("la prima frase e' più lunga della seconda");
  else 
       printf("la seconda frase e' più lunga della prima");  

//controllo stringhe uguali 

char s1[]="boh bohhh";
char destinazione[15];

strncpy(destinazione,s1,);
printf("%s\n"destinazione);




}





