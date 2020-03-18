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
    float pol, cm;
    printf("Polegadas: ");
    scanf("%f", &pol);
    cm = pol*2.54;
    printf("Centímetros: %.2f cm", cm);
    
    return 0;
}
