#include <stdio.h>
void sommadivisori(int _s);
int main(){
    int somma;
    sommadivisori(somma);
    return 0;
    
}

void sommadivisore(int _s){
     int i,j;
     for(i=1;i<=500;i++){
       for (j=1;j<i;j++){
         if(i%j==0)
             _s+=j;
         }
     if(i==_s)
              printf("%d", _s);
               _s=0;
     }
}