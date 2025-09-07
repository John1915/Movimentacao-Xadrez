// torre se move em linha reta (frente e lado).{5 casas para frente}
// Bispo Diagonal (ambos os lados). {mover ele 5 casas a direita}
// Rainha em todas as direções.{rainha 8 casas para esquerda}

// for para torre , while bispo , do-while rainha.

// Movimentar cavalo em L 2 casas para cima e  1 para a direita.
#include <stdio.h>
int main()
{
    printf("======  MOVIMENTANDO PEÇAS DE XADREZ  ========\n");
    // Mover com FOR a torre 5 casas para frente.
    for (int i = 1; i <= 5; i++)
    {
        printf("Torre se moveu %d casa(s) para a esquerda... \n", i);
    }
    printf("******************************\n");
    printf("TORRE PAROU NA 5°CASA\n");
    printf("******************************\n");

    // Mover com WHILE o bispo 5 casas para a direita.
    int b = 1;
    while (b <= 5)
    {
        printf("Bispo se moveu %d casa(s) para a Diagonal... \n", b);
        b++;
    }
    printf("******************************\n");
    printf("BISPO PAROU NA 5° CASA\n");
    printf("******************************\n");
    // Mover com DO a rainha 8 casas para a esquerda.
    int r = 1;
    do
    {
        printf("Rainha se moveu %d casa(s) para a esquerda... \n", r);
        r++;
    } while (r <= 8);

    printf("******************************\n");
    printf("RAINHA PAROU NA 8° CASA\n");
    printf("******************************\n");

    // Mover com (Loopaninhado) o cavalo 2 casas para cima e  1 para a direita.
    printf("******************************\n");

    for (int cima = 1; cima <= 2; cima++)
    {
        printf("Cavalo se moveu %d casas para cima\n", cima);
        for (int direita = 1; direita < cima; direita++)
        {
            printf("Cavalo se moveu %d uma casa para a direita\n", direita);
        }
    }

    return 0;
}