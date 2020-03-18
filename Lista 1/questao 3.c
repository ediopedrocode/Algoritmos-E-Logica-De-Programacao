#include <stdio.h>
#include <stdlib.h>
int main()
{int x=10, y=20, numero, n1, n2, n3;
char letra='A';
float nota=7.48;
    printf("Hello world!\n\n");
    printf("Que legal.");
    printf("A linguagem C!\n");
    printf("Nova linha");
    printf("\nNovas\nlinhas\n");
    printf("Usando o tab:\tOK!\n");
    printf("\nExibe o conteúdo de variáveis.\n");
    printf("y:%d;\nx:%d;",y,x);
    printf("\nUma LETRA:%c",letra);
    printf("\nNota:%f",nota);
    printf("\nNota formatada:%.1f",nota);
    printf("\n\nDigite um numero: ");
    scanf("%d", &numero);
    printf("Numero = %d", numero);
    scanf("%2d%2d%4d", &n1, &n2, &n3);
    printf("%d/%d/%d", n1, n2, n3);
    return 0;
}
