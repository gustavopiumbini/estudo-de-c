#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
}Aluno;

int main(void){

    Aluno aluno;
    
    printf("Digite seu nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite sua nota: ");
    scanf("%f", &aluno.nota);

    printf("\n--- DADOS CADASTRADOS ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d anos\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

return 0;
}
