#include <stdio.h>
#include <stdlib.h>

struct No
{
    int valor;
    struct No *prox;
};

struct No *buscarElemento(struct No *head, int valorBusca)
{
    struct No *atual = head;
    while (atual != NULL)
    {
        if (atual->valor == valorBusca)
        {
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

void imprimirLista(struct No *head)
{
    struct No *atual = head;
    printf("Lista: ");
    while (atual != NULL)
    {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

struct No *inserirNoFim(struct No *head, int valor)
{
    struct No *novo = (struct No *)malloc(sizeof(struct No));
    novo->valor = valor;
    novo->prox = NULL;
    if (head == NULL)
        return novo;
    struct No *atual = head;
    while (atual->prox != NULL)
    {
        atual = atual->prox;
    }
    atual->prox = novo;
    return head;
}

int main()
{
    struct No *lista = NULL;

    lista = inserirNoFim(lista, 10);
    lista = inserirNoFim(lista, 20);
    lista = inserirNoFim(lista, 30);

    imprimirLista(lista);

    struct No *resultado = buscarElemento(lista, 20);
    if (resultado != NULL) {
        printf("Valor %d encontrado no endereço %p.\n", resultado->valor, (void*)resultado);
    } else {
        printf("Valor 20 não encontrado.\n");
    }

    resultado = buscarElemento(lista, 99);
    if (resultado != NULL) {
        printf("Valor %d encontrado no endereço %p.\n", resultado->valor, (void*)resultado);
    } else {
        printf("Valor 99 não encontrado.\n");
    }
    return 0;
}