#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int i, j; 


    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Frente\n");
    }

    printf("\nMovimento do Bispo:\n");
    i = 0; 
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);


// --- 4. CAVALO (LOOPS ANINHADOS) ---
    printf("\nMovimento do Cavalo:\n");
   
    for (i = 0; i < 1; i++) {
        
        j = 0; 
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
