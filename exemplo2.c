#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Introduza dois numeros: ");
    scanf("%d%d", &num1, &num2);
    
    printf("Os números introduzidos foram: %d + %d = %d\n" ,num1,num2, num1+num2);

    return 0;
}