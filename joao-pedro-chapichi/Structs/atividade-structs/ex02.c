// struct Pessoa {
//     int idade;
//     float altura;
// };

// int main() {
//     struct Pessoa *p;
//     p->idade = 20;
//     p->altura = 1.75;
// }
// ----------------------------------------------------------------
struct Pessoa {
    int idade;
    float altura;
};

int main() {
    struct Pessoa *p = (struct Pessoa*) malloc(sizeof(struct Pessoa));
    p->idade = 20;
    p->altura = 1.75;
}