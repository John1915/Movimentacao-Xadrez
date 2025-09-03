// torre se move em linha reta (frente e lado).{5 casas para frente}
// Bispo Diagonal (ambos os lados). {mover ele 5 casas a direita}
// Rainha em todas as direções.{rainha 8 casas para esquerda}

// for para torre , while bispo , do-while rainha.

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

    return 0;
}
