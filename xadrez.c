#include <stdio.h>

// Definição de constantes para as movimentações (Requisito do Desafio)
const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;

int main() {
    // --- NÍVEL AVENTUREIRO: INCLUSÃO DO CAVALO COM LOOPS ANINHADOS ---

    // 1. Movimentação da Torre (FOR)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < PASSOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimentação do Bispo (WHILE)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < PASSOS_BISPO) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // 3. Movimentação da Rainha (DO-WHILE)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < PASSOS_RAINHA);
    printf("\n");

    // 4. Movimentação do Cavalo: 2 casas para baixo e 1 para a esquerda
    // Utiliza loops aninhados (for externo para vertical, while interno para horizontal)
    printf("Movimento do Cavalo:\n");
    for (int vertical = 0; vertical < 2; vertical++) {
        printf("Baixo\n");
        
        // O movimento horizontal ocorre de forma aninhada ao final do movimento vertical
        int horizontal = 0;
        while (vertical == 1 && horizontal < 1) {
            printf("Esquerda\n");
            horizontal++;
        }
    }

    return 0;
}
