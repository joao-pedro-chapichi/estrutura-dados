#include <stdio.h>
#include <stdlib.h>

struct Paciente
{
    char nome[30];
    int idade;
    struct Paciente *prox;
};

void enfileirarComPrioridade(struct Paciente **inicio, struct Paciente **fim) {
    struct Paciente *novo = (struct Paciente*)malloc(sizeof(struct Paciente));

    printf("Digite o novo do paciente (sem espaços): ");
    scanf("%s", novo -> nome);

    printf("Digite a idade do paciente: ");
    scanf("%d", &novo -> idade);

    novo -> prox = NULL;

    if (novo -> idade >= 60) {
        novo -> prox = *inicio;
        *inicio = novo;

        if (*fim == NULL) {
            *fim = novo;
        }
        printf("Paciente PRIORITARIO inserido no inicio da fila.\n");
    } else {
        if (*fim == NULL) {
            *inicio = novo;
            *fim = novo;
        } else {
            (*fim) -> prox = novo;
            *fim = novo;
        }
        printf("Paciente comum inserido no fim da fila.\n");
    }
}

void atenderPaciente(struct Paciente **inicio, struct Paciente **fim) {
    if (*inicio == NULL) {
        printf("fila vazia! Nenhum paciente para atender.\n");
        return;
    }

    struct Paciente *temp = *inicio;
    printf("Atendendo: %s (idade %d)\n", temp -> nome, temp -> idade);
    *inicio = temp -> prox;

    if (*inicio == NULL) {
        *fim = NULL;
    }

    free(temp);
}

void mostrarFila(struct Paciente *inicio) {
    if (inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }

    printf("\nFila de pacientes (prioritarios primeiro): \n");
    while (inicio != NULL) {
        printf("- %s (idade %d)\n", inicio -> nome, inicio -> idade);
        inicio = inicio -> prox;
    }
}

int main() {
    struct Paciente *inicio = NULL;
    struct Paciente *fim = NULL;
    int opcao;

    do {
        printf("\n===== MENU - FILA COM PRIORIDADE =====");
        printf("1. Inserir paciente na fila\n");
        printf("2. Atender próximo paciente\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            enfileirarComPrioridade(&inicio, &fim);
        } else if (opcao == 2) {
            atenderPaciente(&inicio, &fim);
        } else if (opcao == 3) {
            mostrarFila(inicio);
        } else if (opcao == 0) {
            printf("Saindo do programa...\n");
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    while (inicio != NULL) {
        atenderPaciente(&inicio, &fim);
    }

    return 0;
}