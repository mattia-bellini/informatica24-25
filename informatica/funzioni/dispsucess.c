/*stampare i primi n nuemri dispari sucessivi al numero A*/
#include <stdio.h>
 void printdispari(int _a,int _n);
int main(){
    int a,n;
    do{
        printf("inserisci il numero: ");
        scanf("%d",&a);
        printf("inserisci quanti valori dispari occorrono: ");
        scanf("%d",&n);       
    }while(a<=0 || n<=0);
    
    printdispari(a,n);
    return 0;
}
 void printdispari(int _a,int _n){
      int i;
      if(_a%2==0)
        _a++;
      else
        _a+=2;
      for(i=1;i<=_n;i++){
        printf("%d\n",_a);
        _a+=2;
}
}