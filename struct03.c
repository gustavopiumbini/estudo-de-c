#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa p;
    p.idade = 25;

    Pessoa *ptr = &p;
    ptr->idade = 30;
    strcpy(ptr->nome, "Gustavo");
    printf("Idade: %d\n", ptr->idade);
    printf("Nome: %s\n", ptr->nome);
    return 0;

}