#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
       // mover a Bispo "5" casas na diagonal
     int B = 1, movimentoBispo = 5;
    
    printf("\nBispo na Diagonal para Cima e Direita:\n");
    while (B <= 5) {
        printf("Bispo cima Direita\n");
        B++;
    }

printf("\n");

    // Implementação de Movimentação da Torre
   
    // mover a Torre "5" casas a direita
    printf("Torre 5 casas a direita:\n");
    for (int T = 0; T < 5; T++)
    {
        printf("Torre a direita\n"); 
    }

printf("\n");

    // Implementação de Movimentação da Rainha
      // mover a Rainha "8" casas a esquerda
     int R = 1, movimentoRainha = 8;

    printf("\nRainha 8 casas a esquerda):\n");

    do{
        printf("Rainha a esquerda\n");
        R++;
    } while (R <= movimentoRainha);

    

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
