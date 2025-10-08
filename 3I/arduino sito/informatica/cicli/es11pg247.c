/*scrivi un programma che dati in input n numeri interi e un numero x
determina:
1-quanti numeri sono maggiori di x;
2-quanti numeri sono minori di x;
3-quanti numeri sono uguali a x;
*/
#include <stdio.h> 
int main(){
int n=0, x=0, numero=0;
int maggiori = 0, minori = 0, uguali = 0;
printf("Inserisci il numero di scelte : ");
 scanf("%d", &n);
printf("Inserisci il numero x: "); 
scanf("%d", &x);
for (int i = 0; i < n; i++) {
     printf("Inserisci un numero: "); 
     scanf("%d", &numero);
     if (numero > x)  
        maggiori++;
         else if (numero < x) 
            minori++;
            else if (numero==x)
                 uguali++; 
}
            
            printf("Numeri maggiori di %d: %d\n", x, maggiori);
            printf("Numeri minori di %d: %d\n", x, minori);
            printf("Numeri uguali a %d: %d\n", x, uguali);
return 0;
}

