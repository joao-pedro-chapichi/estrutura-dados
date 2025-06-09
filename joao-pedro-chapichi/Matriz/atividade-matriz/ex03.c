#include <stdio.h>

int main() {
    char presencas[4][5];
    char dias[5][10] = {"Seg", "Ter", "Qua", "Qui", "Sex"};

    // Inserir dados
    for (int i = 0; i < 4; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < 5; j++) {
            do {
                printf("Presença no %s (P/F): ", dias[j]);
                scanf(" %c", &presencas[i][j]);
                presencas[i][j] = toupper(presencas[i][j]);
            } while (presencas[i][j] != 'P' && presencas[i][j] != 'F');
        }
    }

    printf("\n\t\tTabela de Presenças\n");
    printf("\tSeg\tTer\tQua\tQui\tSex\n");
    for (int i = 0; i < 4; i++) {
        printf("Aluno %d\t", i + 1);
        for (int j = 0; j < 5; j++) {
            printf("%c\t", presencas[i][j]);
        }
        printf("\n");
    }
}