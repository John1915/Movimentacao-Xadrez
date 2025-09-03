♟️ Movimentando Peças de Xadrez em C

Este projeto demonstra, de forma simples e didática, como usar estruturas de repetição em C para simular o movimento de peças do xadrez: Torre, Bispo e Rainha.

Cada peça utiliza um tipo diferente de loop para se mover no tabuleiro:

Torre ➝ for

Bispo ➝ while

Rainha ➝ do-while

🚀 Lógica do Projeto
Torre (for loop)

Move 5 casas para frente em linha reta.

for (int i = 1; i <= 5; i++) {
    printf("Torre se moveu %d casa(s) para a esquerda...\n", i);
}


➡️ A Torre para na 5ª casa.

Bispo (while loop)

Move 5 casas na diagonal.

int b = 1;
while (b <= 5) {
    printf("Bispo se moveu %d casa(s) para a Diagonal...\n", b);
    b++;
}


➡️ O Bispo para na 5ª casa.

Rainha (do-while loop)

Move 8 casas para a esquerda, podendo se movimentar em todas as direções.

int r = 1;
do {
    printf("Rainha se moveu %d casa(s) para a esquerda...\n", r);
    r++;
} while (r <= 8);


➡️ A Rainha para na 8ª casa.

🛠️ Como Executar

Compile o código com:

gcc main.c -o xadrez


Execute o programa:

./xadrez

📸 Saída Esperada
======  MOVIMENTANDO PEÇAS DE XADREZ  ========
Torre se moveu 1 casa(s) para a esquerda...
Torre se moveu 2 casa(s) para a esquerda...
...
TORRE PAROU NA 5°CASA
******************************
Bispo se moveu 1 casa(s) para a Diagonal...
...
BISPO PAROU NA 5° CASA
******************************
Rainha se moveu 1 casa(s) para a esquerda...
...
RAINHA PAROU NA 8° CASA
******************************

🎯 Objetivo Educacional

Este projeto foi desenvolvido para treinar estruturas de repetição em C, associando-as ao movimento das peças de xadrez:

for ➝ movimentos previsíveis e finitos

while ➝ movimentos condicionais

do-while ➝ garante pelo menos um movimento

✍️ Autor: Enrique
