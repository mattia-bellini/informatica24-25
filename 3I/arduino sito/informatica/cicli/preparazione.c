/*Scrivi un programma in C che disegni usando degli asterischi * un triangolo rettangolo di lato 8 e poi un triangolo isoscele di base 9 e altezza 9.
*/



#include <stdio.h>
int main() {
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 11; j++) {
            if (i==0 || j == 5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}





