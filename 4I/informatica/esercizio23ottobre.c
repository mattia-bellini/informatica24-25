/*verificare se la stringa è palindroma 
ES: osso è palindroma mentre ciao no
*/ 

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef char* stringa ;

int lunghezza (stringa s){
    int i=0;
   while(s[i]!='\0'){
    i++;

   }return i-1;

}

int palindroma(stringa s,int dim){
    int flag=0,i,j;
        for( i=0, j=dim-1; i<dim/2;i++,j--){
            if(s[i]!=s[j])
                flag=1;


        }
        return flag;

}

int main(){
    int dim=0;
    int Palindroma=0;
    stringa s=(stringa)malloc(50*sizeof(char));
    if(s==NULL)
    return 1;

printf("inserisci una stringa: ");
fgets(s,50,stdin);
printf("\n%s",s);
dim=lunghezza(s);
printf("\n%d", dim);

Palindroma=palindroma(s,dim);
if(Palindroma==1)
printf("la parola non è palindroma");
else{
    printf("la parola è palindroma");

}

    
}