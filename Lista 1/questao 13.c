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
    int cv;
    float vv, sf;
    printf("Carros vendidos: ");
    scanf("%d", &cv);
    printf("Valor das vendas: ");
    scanf("%f", &vv);
    sf = 622.00 + 30.00*cv + 0.05*vv;
    printf("Salário final: R$%.2f", sf);
    
    return 0;
}
