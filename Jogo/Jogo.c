#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
    int i;
    int num2 [10];
    int numero;

    printf("\nTente advinhar o numero com menos tentativas possiveis\n");
    srand (time(NULL));

    for (i = 0; i < 10; i++)
    num2[i] = rand();
    
    printf ("%d\n", &num2); /*temporario*/
    

    printf ("digite o numero\n");
    scanf ("%d", &numero);

    if( numero == num2) {
        printf ("parabens voce acertou");
    }
    else{
        if(numero < num2) {
            printf("o numero que voce digitou eh menor");
        }
        else {
            printf ("o numero que voce digitou eh maior");
        }
    }
    return 0;


    }
