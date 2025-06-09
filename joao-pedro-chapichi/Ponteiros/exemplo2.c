#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void atualizarIdade(struct Pessoa p) {
    p.idade += 1;
}

int main() {
    struct Pessoa pessoa;
    strcpy(pessoa.nome, "Ana Paula");
    pessoa.idade = 25;
    pessoa.altura = 1.65;
    printf("Antes (por valor): %d anos\n", pessoa.idade);
    atualizarIdade(pessoa);
    printf("Depois (por valor): %d anos\n", pessoa.idade);
    return 0;
}