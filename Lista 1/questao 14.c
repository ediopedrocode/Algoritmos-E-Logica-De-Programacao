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
    float cf, cc;
    printf("Custo de fábrica: ");
    scanf("%f", &cf);
    cc = cf + 0.28*cf + 0.45*cf;
    printf("Custo final ao consumidor: R$%.2f", cc);
    
    return 0;
}
