#include <stdio.h>

int main()
{
    short int idade;
    int montante;
    long int n_conta;
    
    printf("Qual a sua idade? "); scanf("%hd", &idade);
    printf("Qual é o montante a depositar: "); scanf("%d", &montante);
    printf("Qual o número da sua conta: "); scanf("%ld", &n_conta);
    
    printf("Uma pessoa de %hd anos depositou $%d na conta %ld\n", idade, montante, n_conta);
    return 0;
}