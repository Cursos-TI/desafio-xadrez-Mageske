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

    return 0;
}