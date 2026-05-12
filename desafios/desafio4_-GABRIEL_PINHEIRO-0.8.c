#include <stdio.h>
int main(void)
{
    int numero, i, multi;
    printf("Digite um número para tabuada: ");
    scanf("%d", &numero);
    for (i = 0; i <= 10; i++)
    {
        multi = numero * i;
        printf("%d * %d = %d\n", numero, i, multi);
    }
    return 0;
}