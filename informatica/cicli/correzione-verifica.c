#include<stdio.h>
int main(){
    int scelta, num, min_max, cnt=0;

    printf("Scegli se la sequenza deve essere:\n ");
    printf("1-Crescente\n");
    printf("2-Decrescente\n");
    printf("scelta:");
    scanf("%d", &scelta);

    printf("Inserisci il valore: ");
    scanf("%d", &num);

    min_max=num;
    while(num!=0){
        cnt++;
        switch (scelta)
    {
        case 1:{
            if(num>=min_max){
                min_max=num;
                printf("%d \n",min_max);
            }
        }
            break;
            case 2:{
                if(num<=min_max){
                    min_max=num;
                    printf("%d \n", min_max);
                }

            }
        
        default:{
            printf("Non hai eseguito la scelta giusta ");
        }
    printf("Inserisci un nuovo valore: ");
    scanf("%d", &num);

     }
     printf("Sono stati inseriti %d valori", cnt);
        }







}