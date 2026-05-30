#include <stdio.h>

// Definição de variáveis constantes para os limites de movimentação (Requisito do Desafio)
const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;

// Protótipos das funções recursivas para a movimentação das peças 
void moverTorre(int casas);
void moverBispo(int casas);
void moverRainha(int casas);

int main() {
    // --- NÍVEL MESTRE: EXECUÇÃO DOS MOVIMENTOS COMPLEXOS ---

    // 1. Movimentação da Torre (Recursiva) 
    printf("Movimento da Torre:\n");
    moverTorre(PASSOS_TORRE);
    printf("\n"); // Linha em branco separando a saída (Requisito do Desafio) 

    // 2. Movimentação do Bispo (Recursiva + Loops Aninhados) 
    printf("Movimento do Bispo:\n");
    moverBispo(PASSOS_BISPO);
    printf("\n"); // Linha em branco separando a saída 

    // 3. Movimentação da Rainha (Recursiva) 
    printf("Movimento da Rainha:\n");
    moverRainha(PASSOS_RAINHA);
    printf("\n"); // Linha em branco separando a saída 

    // 4. Movimentação do Cavalo (Loops aninhados com múltiplas variáveis, continue e break) 
    // O Cavalo deve se mover em L para cima e à direita: 2 casas para cima e 1 para a direita 
    printf("Movimento do Cavalo:\n");
    
    // Inicialização de múltiplas variáveis no escopo do loop (Requisito do Desafio) 
    for (int vertical = 1, horizontal = 1; vertical <= 3; vertical++) {
        // Controle do movimento vertical (2 casas para cima) 
        if (vertical < 3) {
            printf("Cima\n");
            continue; // Utilização de continue para saltar para a próxima iteração vertical 
        }
        
        // Loop aninhado interno para o movimento horizontal (1 casa para a direita)
        for (; horizontal <= 1; horizontal++) {
            printf("Direita\n");
            break; // Utilização de break para interromper o fluxo do loop interno 
        }
    }

    return 0; // Retorno padrão da função main executada com sucesso
}

// Implementação da Função Recursiva para a Torre 
void moverTorre(int casas) {
    // Condição de parada da recursão para evitar estouro de pilha
    if (casas <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva decrementando o contador
}

// Implementação da Função Recursiva para o Bispo usando Loops Aninhados 
void moverBispo(int casas) {
    // Condição de parada da recursão
    if (casas <= 0) {
        return;
    }

    // Loop mais externo para o movimento vertical (Requisito do Desafio) 
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");
        
        // Loop mais interno para o movimento horizontal (Requisito do Desafio) 
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva decrementando o contador 
}

// Implementação da Função Recursiva para a Rainha 
void moverRainha(int casas) {
    // Condição de parada da recursão
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva decrementando o contador
}
