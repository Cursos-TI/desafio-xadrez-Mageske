#include <stdio.h>

int main() {
    // --- MOVIMENTAÇÃO DA TORRE ---
    printf("--- Movimento da Torre ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DO BISPO ---
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 1;
    while (casasBispo <= 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 1;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha <= 8);
    printf("\n");

    // --- MOVIMENTAÇÃO DO CAVALO (NÍVEL AVENTUREIRO) ---
    printf("--- Movimento do Cavalo ---\n");

    int jogadaVertical = 2;
    int jogadaHorizontal = 1;

    // Loop externo (for) controla o avanço nas linhas (vertical)
    for (int i = 1; i <= jogadaVertical; i++) {
        printf("Baixo\n");

        // Quando o Cavalo atinge a segunda casa para baixo, o loop interno executa
        if (i == jogadaVertical) {
            int j = 1;
            // Loop interno (while) controla o avanço na perpendicular (esquerda)
            while (j <= jogadaHorizontal) {
                printf("Esquerda\n");
                j++;
            }
        }
    }
    printf("\n");

    return 0;
}