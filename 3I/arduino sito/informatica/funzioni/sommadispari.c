/*Si scriva un programma in linguaggio C che
letto un nuemro intero positivo dallo standard
input,visualizzi a terminale il quadrato del 
numero stesso facendo uso soltanto di operazioni di somma
il quadrato di ogni numero intero positivo N può essere costruito
sommando tra loro i primi N numeri dispari
ES:N=5; N2=1+3+5+7+9=25.
*/
#include <stdio.h>

void contaqaud(int _n, int*_quadrato);

int main(){
int num, quadrato=0;
do{
    printf("inserisci un numero: ");
    scanf("%d", &num);
}while(num<0);
contaqaud( num, &quadrato);
}
void contaqaud(int _n, int*_quadrato){
    int c=1;
for(int i=1;i<=_n;i++){
    if(c%2==1){
        printf("%d,", c);
        *_quadrato+=c;
        c+=2;
    }

}



}
