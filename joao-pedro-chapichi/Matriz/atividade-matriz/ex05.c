#include <stdio.h>

int main() {
    float notas[3][3];
    float somaAluno, somaMateria;

    for (int i = 0; i < 3; i++) {
        printf("Aluno %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Nota da matéria %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nMédia por aluno:\n");
    for (int i = 0; i < 3; i++) {
        somaAluno = 0;
        for (int j = 0; j < 3; j++) {
            somaAluno += notas[i][j];
        }
        printf("Aluno %d: %.2f\n", i + 1, somaAluno / 3);
    }

    printf("\nMédia por materia:\n");
    for (int j = 0; j < 3; j++) {
        somaMateria = 0;
        for (int i = 0; i < 3; i++) {
            somaMateria += notas[i][j];
        }
        printf("Matéria %d: %.2f\n", j + 1, somaMateria / 3);
    }
}