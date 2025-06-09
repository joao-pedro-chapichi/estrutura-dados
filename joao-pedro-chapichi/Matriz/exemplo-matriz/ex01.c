#include <stdio.h>

int main() {
    // Criamos uma matriz 3x3 do tipo float
    // Cada linha representa um aluno
    // Cada coluna representa uma matéria
    float notas[3][3];

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("Digite a nota da matéria");
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nBoletim completo:\n");

    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n");
        for (int j = 0; j < 3; j++) {
            printf("\n");
        }
        printf("\n");
    }

    printf("\nMédia de cada aluno:\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += notas[i][j];
        }
        float media = soma / 3.0;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }

    return 0;
}