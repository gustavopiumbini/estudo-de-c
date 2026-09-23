#include <stdio.h>

int somar(int a, int b)
{
  return a + b; 
}

int subtrair(int a, int b)
{
    return a - b; 
}

float encontrarMaior(float notas[], int tamanho)
{
    float maior = notas[0];
    for (int i = 1; i< tamanho; i++){
        if (notas[i] > maior) {
            maior = notas[i];
        }
    return maior;
    }
}

float encontrarMenor (float notas[], int tamanho)
{
    float menor = notas [0];
    for (int i = 1; i < tamanho; i++){
        if(notas[i] < menor){
            menor = notas[i];
        }
    
    
    return menor;
    }
}

int main(void)
{
    int numero1;
    int numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("Soma: %d\n", somar(numero1, numero2));
    printf("Subtracao: %d\n", subtrair(numero1, numero2));

    return 0;
}