#include <stdio.h>

int main() {
    // =============================
    // Movimento da Torre (FOR loop)
    // =============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ================================
    // Movimento do Bispo (WHILE loop)
    // ================================
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ====================================
    // Movimento da Rainha (DO-WHILE loop)
    // ====================================
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // ===============================
    // Movimento do Cavalo (FOR + WHILE)
    // ===============================
    int movimentosVerticais = 2;  // Duas casas para baixo
    int movimentosHorizontais = 1; // Uma casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (obrigatoriamente um FOR): simula movimentos verticais
    for (int k = 0; k < movimentosVerticais; k++) {
        printf("Baixo\n");
        }
    }

    // Movimento horizontal após os dois movimentos verticais
    int l = 0;
    while (l < movimentosHorizontais) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
