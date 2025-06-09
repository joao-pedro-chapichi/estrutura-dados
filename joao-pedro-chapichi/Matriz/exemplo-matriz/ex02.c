#include <stdio.h>
#include <string.h>

int main() {
    char grade[5][5][30];
    char dias[5][10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta"};

    for (int i = 0; i < 5; i++) {
        printf("\nDia %s\n", dias[i]);
        for (int j = 0; j < 3; j++) {
            printf("Digite a disciplina da aula %d: ", j + 1);
            scanf(" %[^\n]", grade[i][j]);
        }
    }

    printf("\nGrade de Horários:\n");

    for (int i = 0; i < 5; i++) {
        printf("\n%s:\n", dias[i]);
        for (int j = 0; j < 5; j++) {
            printf("    Aula %d: %s\n", j + 1, grade[i][j]);
        }
    }

    return 0;
}