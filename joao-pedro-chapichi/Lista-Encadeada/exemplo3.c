#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No *prox;
};

struct No* removerElemento(struct No *head, int valorRemover) {
    if (head == NULL) {
        printf("Lista vazia.\n");
        return NULL;
    }

    if (head -> valor == valorRemover) {
        struct No *temp = head;
        head = head -> prox;
        free(temp);
        return head;
    }

    struct No *anterior = head;
    struct No *atual = head -> prox;
    while (atual != NULL && atual -> valor != valorRemover) {
        anterior = atual;
        atual = atual -> prox;
    }

    if (atual == NULL) {
        printf("Valor %d não encontrado na lista.\n", valorRemover);
        return head;
    }

    anterior -> prox = atual -> prox;
    free(atual);
    return head;
}

void imprimirLista(struct No *head) {
    struct No *atual = head;
    printf("Lista: ");
    while (atual != NULL) {
        printf("%d -> ", atual -> valor);
        atual = atual -> prox;
    }
    printf("NULL\n");
}

struct No* inserirNoFim(struct No *head, int valor) {
    struct No *novo = (struct No*)malloc(sizeof(struct No));
    novo -> valor = valor;
    novo -> prox = NULL;
    if (head == NULL) return novo;
    struct No *atual = head;
    while (atual -> prox != NULL) {
        atual = atual -> prox;
    }
    atual -> prox = novo;
    return head;
}

int main() {
    struct No *lista = NULL;

    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);
    lista = inserirNoFim(lista, 40);
    imprimirLista(lista);

    lista = removerElemento(lista, 30);
    imprimirLista(lista);

    lista = removerElemento(lista, 99);

    lista = removerElemento(lista, 10);
    imprimirLista(lista);
    return 0;
}