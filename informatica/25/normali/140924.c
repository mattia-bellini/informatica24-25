/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE. */

#include <stdio.h>

int main(){

int giorno, mese, anno, bisestile, giorno1, mese1, anno1, bisestile1;
printf("inserire il giorno della prima data: ");
scanf("%d", &giorno);
printf("inserire il mese della prima data: ");
scanf("%d", &mese);
printf("inserire il anno della prima data: ");
scanf("%d", &anno);
printf("inserire il giorno1 della seconda data: ");
scanf("%d", &giorno1);
printf("inserire il mese1 della seconda data: ");
scanf("%d", &mese1);
printf("inserire il anno della seconda data: ");
scanf("%d", &anno1);

if(anno%100==0){
        if(anno%400==0){
            printf("\n l'anno è bisestile");
             bisestile=1;
        }
        else{
            printf("\nl'anno non è bisestile");
        }
    }
    else{
        if(anno%4==0){
            printf("\n l'anno è bisestile");
                bisestile=1;
        }
    }

    if(mese>0 && mese<13){
        if(mese==2){
            if(giorno>0 && giorno<29+bisestile){
                printf("\nla data è accettabile");
            }
            else{
                printf("\nla data non è accettabile");
            }
        }
        else{
            if(mese==11 || mese==4 ||mese==6 || mese==9){
                if(giorno>0 && giorno<31){
                    printf("\nla data  accettabile");
                }
                else{
                 printf("\nla data non è accettabile");
                }
            }
            else{
                if(giorno>0 && giorno<32){
                    printf("\nla data  accettabile");
             }
                else{
                    printf("\nla data non è accettabile");
            }
        }
    }
    }
    else{
        printf("\nla data non è accettabile");
    }
    if(anno1%100==0){
        if(anno1%400==0){
            printf("\n l'anno è bisestile");
             bisestile1=1;
        }
        else{
            printf("\nl'anno non è bisestile");
        }
    }
    else{
        if(anno1%4==0){
            printf("\n l'anno è bisestile");
                bisestile1=1;
        }
    }

    if(mese1>0 && mese1<13){
        if(mese1==2){
            if(giorno1>0 && giorno1<29+bisestile1){
                 printf("\nla data è accettabile");
            }
            else{
                 printf("\nla data non è accettabile");
            }
        }
        else{
            if(mese1==11 || mese1==4 ||mese1==6 || mese1==9){
                if(giorno1>0 && giorno1<31){
                    printf("\nla data  accettabile");
                }
                else{
                    printf("\nla data non è accettabile");
            }
            }
            else{
                if(giorno1>0 && giorno1<32){
                    printf("\nla data  accettabile");
                }
                else{
            printf("\nla data non è accettabile");
            }
        }
    }
    }
    else{
        printf("\nla data non è accettabile");
    }

if(anno<anno1)
    printf("\n la data più recente è la seconda");
else if(anno>anno1)
    printf("la prima data è più recente");

else{
    if(mese<mese1)
        printf("\n la seconda data è più recente");
    else if(mese>mese1)
         printf("\n la prima data è più recente");
    else{
        if (giorno<giorno1)
             printf("\n la seconda data è più recente");
        else if(giorno>giorno1)
            printf("\n la prima data è più recente");
        else
             printf("\n le due date sono uguali");
    }
}
 
    
}