/*DATO UN NUMERO N POSITIVO NON NULLO MINORE DI 20 E UN NUMERO C(tra
1 e 9) STAMPARE TUTTI I MULTIPLI DI C MINORI DI N.*/


#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
int n,c, m;
n=rand()%19-1+1;
c=rand()%9-1+1;
printf("il primo numero inserito è %d", n);
printf("il secondo numero inserito è %d", c);

m=c+c;

if(m<n){
printf("&d", m);
m=m+c;
}
if(m<n){
printf("&d", m);
m=m+c;
}
if(m<n){
printf("&d", m);
m=m+c;
}
if(m<n){
printf("&d", m);
m=m+c;
}
if(m<n){
printf("&d", m);
m=m+c;
}





















