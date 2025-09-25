/*
Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
    */
    #include<stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int main(){
    int *numeri=NULL; //array dinamico 
    int dimensione=0;//quanti elementi ci sono
    int scelta,n,j, i,trovato ;

    do{
    printf("\n----menù-----\n");
    printf("\n 1. Aggiungere un numero (espandendo l’array con realloc)\n");
    printf("\n 2. Visualizzare tutti i numeri\n");
    printf("\n 3. Cercare un numero specifico\n");
    printf("\n 4. Ordinare i numeri in ordine crescente\n");
    printf("\n 5. Eliminare un numero scelto\n");
    printf("\n 6. Uscire\n");
    printf("esegui una scelta: ");
    scanf("%d", &scelta);

    swith(scelta){
        case 1:
        printf("numero da inserire: ");
        scanf("%d",&n);
        numeri=(int*)realloc(numeri, (dimensione+1)*sizeof(int));//aggiunge lo spazio quindi 1 alla dimensione 
        if(numeri==NULL){
            printf("errore di allocazione\n");
        }
            numeri[dimensione]=n;
            dimensione++;
            printf("numero aggiunto\n");

    break;
    case 2: 
        printf("contenuto dell'array: ");
        if(dimensione==0)
            print("array senza elementi");
        else
            for(i=0;i<dimensione;i++){
        printf("%d\t",numeri [i]);
         }
    case 3:
        printf("numero da cercare: ");
        scanf("%d", &n);
        for(i=0;i<dimensione;i++){
            if(numeri[i]==n){
                trovato=1;
                printf("numero trovato in posizione %d\n",i);
            }
        }
        if(trovato==0){
            printf("elemento non trovato\n");

        }
    }



    }while(scelta=!6);





    }