#include <stdio.h>


void mostrarTabuleiro(char tabuleiro[3][3]) {
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) printf("|");
        }
        if (i < 2) printf("\n---+---+---\n");
    }
    printf("\n");
}


int main() {
    char tabuleiro[3][3];
    int linha, coluna;
    char jogador = 'X';
    int jogadas = 0;
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';

    while (jogadas < 9) {
        mostrarTabuleiro(tabuleiro);
        printf("Jogador %c, em qual linha e coluna deseja jogar? (0-2): ", jogador);
        scanf("%d %d", &linha, &coluna);

        if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || tabuleiro[linha][coluna] != ' ') {
            printf("Essa posição ja foi escolhida.\n");
            continue;
        }

        tabuleiro[linha][coluna] = jogador;
        jogadas++;
        

        jogador = (jogador == 'X') ? 'O' : 'X';
    }
    
}