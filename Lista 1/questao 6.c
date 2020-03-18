#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    int inteiro1, inteiro2, resultado;
    printf("\nInsira o valor de dois inteiros A e B para saber o resultado de sua divisão A/B.");
    printf("\nA:");
    scanf("%d", &inteiro1);
    printf("\nB:");
    scanf("%d", &inteiro2);
    resultado = inteiro1/inteiro2;
    printf("A divisao de %d por %d é igual a %d", inteiro1, inteiro2, resultado);

    return 0;
}
