#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int i;
    int num[10];

    srand (time(NULL));

    for (i = 0; i < 10; i++)
        num[i] = rand();

    printf("%d\n\n", num);




}