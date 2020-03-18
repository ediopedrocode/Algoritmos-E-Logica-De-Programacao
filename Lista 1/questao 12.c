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
    int c, r, m, s;
    float pr;
    printf("Chocolates: ");
    scanf("%d", &c);
    printf("Refrigerantes: ");
    scanf("%d", &r);
    printf("Misto quentes: ");
    scanf("%d", &m);
    printf("Sorvetes: ");
    scanf("%d", &s);
    pr= c*1.5 + r*2 + m*2 + s*1.5;
    printf("Preço: R$%.2f", pr);
    
    return 0;
}
