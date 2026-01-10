#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


void moverTorre(int movimentos);
void moverRainha(int movimentos);
void moverBispo(int movimentos);

int main() {
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(passosTorre); 
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(passosBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(passosRainha);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    
    for (int i = 0, j = 0; i < 1; i++) { 
        
        while (j < 3) { 
            
            if (j < 2) {
                printf("Cima\n");
                j++; 
                continue; 
            }

            if (j == 2) {
                printf("Direita\n");
                j++;
                break;
            }
        }
    }

    return 0;
}


void moverTorre(int n) {
    if (n > 0) {
        printf("Cima\n"); 
        moverTorre(n - 1);   
    }
}


void moverRainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainha(n - 1); 
    }
}

void moverBispo(int n) {
    if (n > 0) {
    
        
        int v = 0;
        while(v < 1) { 
            printf("Cima, ");
            
            int h = 0;
            while(h < 1) { 
                printf("Direita\n");
                h++;
            }
            v++;
        }
        
        moverBispo(n - 1); 
    }
}