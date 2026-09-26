#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int idade;
} Pessoa;

int main(void){

    Pessoa *p = malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    p->idade = 25;
    printf("Idade: %d\n", p->idade);
    free(p);

    return 0;
}
