#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){

    int num, sorteio, tentativa=0;
    char c;

    srand(time(NULL));
    sorteio = rand() % 1000;

    do{
        tentativa++;
        printf("\ntentativa numero %d", tentativa);
        printf("\ntente advinhar o numero: ");
        scanf("%d", &num);

        if(num==sorteio){
            printf("acertou!");
            break;
        }
                if(num<sorteio){
                    printf("numero menor do que o sortiado");
                }
                else{
                    printf("numero maior do que o sortiado");
                }
            printf ("\ntente de novo? (S/N)");
            fflush(stdin);
            scanf ("%c", &c);
        }while(c=='s' || c=='S');
        

        return 0;
    }
   