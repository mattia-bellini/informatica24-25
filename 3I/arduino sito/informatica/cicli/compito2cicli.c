/*progettare un algoritmo che legga un numero B<A e scriva quante volte 
A è divisibile per B.
ES: A=162 e B=3 a è divisibile 4 volte per b
*/
#include <stdio.h>

int main(){
int a, b,c, resto=0,cnt=0;
printf("inserisci il valore di A: ");
scanf("%d", &a);
printf("inserisci un valore di B: ");
scanf("%d", &b);

if(b>a){
    a=c;
    b=a;
    b=c;
}

while(resto==0){
if(a%b==0)
a=a/b;
else
resto++;
if(resto!=1)
cnt++;
}

printf("A è divisibile per B %d volte",cnt);



}