#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    char nome[40];
    float nota;
};

int main() {
    struct Aluno *aluno = (struct Aluno *)malloc(sizeof(struct Aluno));

    if (aluno == NULL) {
        printf("Erro ao alocar memoria");
        return 1;
    }

    printf("Digite o nome do aluno (sem espaços): ");
    scanf("%s", aluno->nome);
    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);
    printf("\n=== Dados do Aluno ===\n");
    printf("Nome: %s\n", aluno->nome);
    printf("Nota: %.2f\n", aluno->nota);
    free(aluno);
    return 0;
}