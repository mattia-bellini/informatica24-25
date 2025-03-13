/*inizializza un array e stamparlo al contrario*/
#include <stdio.h>
#define max 10
int main(){
int v[max], j=1;
//carico l'array
for(int i=0;i<max;i++){
v[i]=2*j;
j++;
}
//stampa del vettore
for(int i=max-1;i>=0;i--){
    printf("%d ", v[i]);
}
}