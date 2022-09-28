#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i;
    int num[10];

    srand (time(NULL));

    for (i = 0; i < 1; i++)
        num[i] = rand();

     printf("\n\n");
    for (i = 0; i < 1; i++)
        printf("%d ", num[i]);
    printf ("\n\n");


    return 0;
}