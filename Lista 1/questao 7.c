#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");
    float Dolar, Real ;
    printf("\nConversão de Dólar para Real.");
    printf("\nValor em dólar:");
    scanf("%f", &Dolar );
    Real = 3.18 * Dolar ;
    printf("Valor em Real: %f", Real);

    return 0;
}
