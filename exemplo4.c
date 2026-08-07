#include <stdio.h>

int main()
{
    float raio, perimetro;
    double Pi = 3.1415927, area;
    
    printf("Introduza o raio da cincurferência: ");
    scanf("%f", &raio);
    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;
    
    printf("Área = %f\n Perímetro = %f\n", area, perimetro);
    return 0;
    
}