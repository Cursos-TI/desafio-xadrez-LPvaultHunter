#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o Bispo (com chamada externa para loop aninhado)
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

// Movimento do Cavalo com loops aninhados e controle de fluxo
void moverCavaloL() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("\nMovimento do Cavalo (em 'L': 2 para Cima e 1 para Direita):\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) continue; // Simula um controle de lógica se necessário
        for (int j = 0; j < movimentosHorizontais + 1; j++) {
            if (j == 1) {
                printf("Direita\n");
                break;
            }
            printf("Cima\n");
            printf("Cima\n");
        }
    }
}

// Movimento do Bispo com loops aninhados (loop externo = vertical, interno = horizontal)
void moverBispoComLoops(int passos) {
    printf("\nMovimento do Bispo com Loops Aninhados (Diagonal para Cima e Direita):\n");
    for (int linha = 1; linha <= passos; linha++) {
        for (int coluna = 1; coluna <= 1; coluna++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre com recursão
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita ):\n");
    moverTorre(casasTorre);

    // Movimento do Bispo com recursão
    int casasBispo = 5;
    printf("\nMovimento do Bispo (5 casas na Diagonal ):\n");
    moverBispoRecursivo(casasBispo, casasBispo);

    // Movimento do Bispo com loops aninhados (extra)
    moverBispoComLoops(5);

    // Movimento da Rainha com recursão
    int casasRainha = 8;
    printf("\nMovimento da Rainha (8 casas para a Esquerda ):\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo com loops complexos
    moverCavaloL();

 

    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
