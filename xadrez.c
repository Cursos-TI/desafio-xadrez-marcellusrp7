#include <stdio.h>

// Definição de constantes para as movimentações (Requisito do Desafio)
const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;

int main() {
    // --- NÍVEL NOVATO: MOVIMENTAÇÃO COM LOOPS SIMPLES ---

    // 1. Movimentação da Torre: 5 casas para a direita usando FOR
    printf("Movimento da Torre:\n");
    for (int i = 0; i < PASSOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Linha em branco separando a saída

    // 2. Movimentação do Bispo: 5 casas na diagonal superior direita usando WHILE
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < PASSOS_BISPO) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n"); // Linha em branco separando a saída

    // 3. Movimentação da Rainha: 8 casas para a esquerda usando DO-WHILE
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < PASSOS_RAINHA);

    return 0;
}
