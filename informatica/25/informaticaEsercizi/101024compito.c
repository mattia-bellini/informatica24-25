#include <stdio.h>

int main() {
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
        printf("inserisci un numero");
            scanf("%d", &n1);
        printf("Inserisci un numero");
            scanf("%d", &n2);
        printf("Inserisci un numero");
            scanf("%d", &n3);
        printf("Inserisci un numero");
            scanf("%d", &n4);
        printf("Inserisci un numero");
            scanf("%d", &n5);
        if
             (n1!=n2&&n1!=n3&&n1!=n4&&n1!=n5&&n2!=n3&&n2!=n4&&n2!=n5&&n3!=n4&&n3!=n5
&&n4!=n5){
if (n2 - n1 == 1 && n3 - n2 == 1 && n4 - n3 == 1 && n5 - n4
== 1){
            printf("La sequenza di numeri è valida");
}
            else{
                printf("La sequenza non è valida");
}
}
return 0;
}