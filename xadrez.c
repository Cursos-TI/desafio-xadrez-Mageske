#include <stdio.h>

// --- FUNÇÕES RECURSIVAS ---

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva decrementando as casas restantes
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal Cima-Direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

int main() {
    // 1. MOVIMENTAÇÃO DA TORRE (RECURSIVA)
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorre(5);
    printf("\n");

    // 2. MOVIMENTAÇÃO DO BISPO (RECURSIVA)
    printf("--- Movimento do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(5);
    printf("\n");

    // 3. MOVIMENTAÇÃO DO BISPO (LOOPS ANINHADOS)
    printf("--- Movimento do Bispo (Loops Aninhados) ---\n");
    // Cada iteração do loop externo representa 1 casa vertical, e o interno 1 casa horizontal
    for (int vert = 1; vert <= 5; vert++) {
        for (int horiz = 1; horiz <= 5; horiz++) {
            // A diagonal pura ocorre quando o passo vertical é igual ao horizontal
            if (vert == horiz) {
                printf("Cima, Direita\n");
            }
        }
    }
    printf("\n");

    // 4. MOVIMENTAÇÃO DA RAINHA (RECURSIVA)
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainha(8);
    printf("\n");

    // 5. MOVIMENTAÇÃO DO CAVALO (LOOPS COMPLEXOS)
    printf("--- Movimento do Cavalo (Loops Complexos) ---\n");
    
    // i controla o movimento vertical (cima), j controla o horizontal (direita)
    for (int i = 1, j = 0; i <= 3; i++) {
        // Condição complexa: se passou do limite vertical de 2 casas, interrompe o fluxo
        if (i > 2) {
            break; 
        }
        
        printf("Cima\n");

        // Loop interno simula a mudança de eixo perpendicular (horizontal)
        while (j < 1) {
            // Só executa o movimento horizontal após terminar os 2 movimentos para cima
            if (i < 2) {
                // Força o 'while' a pular a execução até que o 'for' atinja a 2ª casa vertical
                continue; 
            }
            printf("Direita\n");
            j++; // Incrementa para encerrar o loop interno
        }
    }
    printf("\n");

    return 0;
}