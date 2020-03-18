#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float base, altura, area;
    printf("\nDigite a base e a altura de um triangulo e saiba a area.");
    printf("\nBase:");
    scanf("%f", &base);
    printf("Altura:");
    scanf("%f", &altura);
    area = (base*altura)/2;
    printf("Area= %.2f", area);

    return 0;
}
