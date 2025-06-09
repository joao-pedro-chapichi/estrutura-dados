#include <stdio.h>
#include <stdlib.h>

#define TAM 5

struct Fila {
    int dados[TAM];
    int inicio;
    int fim;
};

void inicializarFila(struct Fila *f) {
    f -> inicio = 0;
    f -> fim = 0;
}

int filaCheia(struct Fila *f) {
    return f -> fim == TAM;
}

int filaVazia(struct Fila *f) {
    return f -> inicio == f -> fim;
}

void enfileirar(struct Fila *f, int valor) {
    if (filaCheia(f)) {
        printf("Fila cheia! Não é possível inserir.\n");
        return;
    }

    f -> dados[f -> fim] = valor;
    f -> fim++;
    printf("Elemento %d inserido com sucesso.\n", valor);
}

void desenfileirar(struct Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia! Nada para remover.\n");
        return;
    }

    int removido = f -> dados[f -> inicio];
    printf("Elemento %d removido da fila.\n", removido);
    f -> inicio++;
}

void mostrarFila(struct Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }
    printf("Fila atual: ");
    for (int i = f -> inicio; i < f -> fim; i++) {
        printf("%d", f -> dados[i]);
    }
    printf("\n");
}

int main() {
    struct Fila fila;
    inicializarFila(&fila);
    int opcao, valor;
    do {
        printf("\n===== MENU - FILA COM VETOR =====\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Mostrar fila\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                enfileirar(&fila, valor);
                break;
            case 2:
                desenfileirar(&fila);
                break;
            case 3:
                mostrarFila(&fila);
                break;
            case 0:
                printf("Encerramento o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);
    
    return 0;
}