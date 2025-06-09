#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

void push(struct No **topo, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> prox = *topo;
    *topo = novo;
}

int pop(struct No **topo) {
    if (*topo == NULL) {
        printf("Pilha vazia!\n");
        return -1;
    }
    struct No *temp = *topo;
    int valor = temp -> valor;
    *topo = temp -> prox;
    free(temp);
    return valor;
}

int peek(struct No *topo) {
    if (topo == NULL) {
        printf("Pilha vazia\n");
        return -1;
    }
    return topo -> valor;
}

void imprimirPilha(struct No *topo) {
    printf("Topo da pilha\n");
    while (topo != NULL) {
        printf("   %d\n", topo -> valor);
        topo = topo -> prox;
    }
    printf("NULL\n");
}

int main() {
    struct No *pilha = NULL;
    push(&pilha, 10);
    push(&pilha, 20);
    push(&pilha, 30);

    imprimirPilha(pilha);

    printf("Valor no topo (peek): %d\n", peek(pilha));

    int valorRemovido = pop(&pilha);
    printf("Valor removido (pop): %d\n", valorRemovido);

    printf("Novo topo (peek): %d\n", peek(pilha));

    imprimirPilha(pilha);

    return 0;
}