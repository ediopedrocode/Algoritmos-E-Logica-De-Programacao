/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float bruto, extra, liquido;
    printf("Salário bruto: ");
    scanf("%f", &bruto);
    printf("Horas extras: ");
    scanf("%f", &extra);
    liquido = bruto+extra-(0.08*bruto);
    printf("Salário liquido: R$%.2f", liquido);
    
    return 0;
}
