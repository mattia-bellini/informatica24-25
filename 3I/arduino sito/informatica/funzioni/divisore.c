/*dato un numero stampare i suoi divisori*/
#include <stdio.h>
         void printDivisori(int _n); //_n parametro formale   
int main(){
    
    
    int n;
    do{
        printf("inserisci un numero: ");
        scanf("%d",&n);
    }while(n<=0);
    printf("i divisori di %d sono: ,", n);
    //chiamata funzione 
    printDivisori(n); //numero parametro effettivo
    return 0;  
}
          void printDivisori(int _n){
               int i;
               for(i=1;i<=_n;i++)
               if(_n%i==0)
               printf("%d\t", i);
               
}  