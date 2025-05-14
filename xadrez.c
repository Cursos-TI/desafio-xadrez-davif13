#include <stdio.h>

// =============================
// Função recursiva para Torre
// =============================
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// =============================
// Função recursiva para Bispo
// =============================
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// =============================
// Função recursiva para Rainha
// =============================
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// =============================
// Função com loops aninhados para Bispo (extra)
// Loop externo: vertical (cima)
// Loop interno: horizontal (direita)
// =============================
void moverBispoComLoops(int movimentos) {
    printf("\nMovimento do Bispo com loops aninhados:\n");

    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 1; j++) { // 1 passo para a direita por movimento
            printf("Cima Direita\n");
        }
    }
}

// =============================
// Movimento complexo do Cavalo
// "L" para cima e direita:
// Duas casas para cima, uma para direita
// Usando loops aninhados com múltiplas variáveis
// =============================
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    // Loop externo controla tentativas de movimento
    for (int i = 0; i < 3; i++) {  // simula até 3 tentativas (apenas 1 válida neste exemplo)
        int sucesso = 1;

        for (int j = 0; j < movimentosVerticais + movimentosHorizontais; j++) {
            if (j < movimentosVerticais) {
                printf("Cima\n");
            } else if (j == movimentosVerticais) {
                printf("Direita\n");
            } else {
                // Movimento além do esperado, pular
                sucesso = 0;
                break;
            }

            // Condicional para simular controle de fluxo
            if (j == 1 && i > 0) {
                continue;
            }
        }

        if (sucesso) {
            break;  // Interrompe após um movimento completo
        }
    }
}

int main() {
    // =============================
    // Torre
    // =============================
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // =============================
    // Bispo com recursão
    // =============================
    int casasBispo = 5;
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    // =============================
    // Bispo com loops aninhados (extra)
    // =============================
    moverBispoComLoops(casasBispo);

    // =============================
    // Rainha com recursão
    // =============================
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // =============================
    // Cavalo com loops aninhados complexos
    // =============================
    moverCavalo();

    return 0;
}
