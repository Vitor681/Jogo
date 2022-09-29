#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    int num, sorteio, tentativa = 0;
    char c;

    srand(time(NULL));
    sorteio = rand() % 100;
    printf("\n\nBem vindo ao jogo!\nTente acertar o numero com o menos de tentativa que conseguir!\n\n");

    do
    {
        tentativa++;
        printf("\ntentativa numero %d", tentativa);
        printf("\ndigite 0 para sair");
        printf("\ntente advinhar o numero: ");
        scanf("%d", &num);
        if (num != 0)
        {
            if (num == sorteio)
            {
                printf("\n\nacertou miseravi!");
                break;
            }
            if (num < sorteio)
            {
                printf("\nnumero menor do que o sortiado\n");
            }
            else
            {
                printf("\nnumero maior do que o sortiado\n");
            }
        }
    } while (num != 0 || num == sorteio);
    return 0;
}
