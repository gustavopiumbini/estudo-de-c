#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[50];
    int idade;
    int periodo;
    float nota_estrutura;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu período de Ciência da Computação: ");
    scanf("%d", &periodo);

    printf("Digite sua nota em estrutura de dados: ");
    scanf("%f", &nota_estrutura);

    printf("\nDados informados:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Período: %d\n", periodo);
    printf("Nota: %.2f\n", nota_estrutura);

    if (nota_estrutura >= 7.0 && periodo >= 3) {
        printf("Parabéns você está apto para a monitoria.\n");
    }
    else if (nota_estrutura >= 7.0 && periodo < 3) {
        printf("Boa noita, mas ainda não pode ser monitor.\n");
    } else {
        printf("Nota insuficiente para monitoria\n");
    } 
    

    return 0;
}