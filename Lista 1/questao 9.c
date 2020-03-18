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
    int segundo;
    float hora, minuto, segundos;
    setlocale(LC_ALL, "");
    printf("Segundos:");
    scanf("%d", &segundo);
    hora = segundo/3600;
    minuto = segundo/60;
    segundos = segundo-(minuto*60);
    printf("Hora: %.f:%.f:%.f", hora, minuto, segundos);
    
    return 0;
}
