#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int a = 5, b = 3;

    printf("soma de %d e %d é %d\n", a, b, a + b); // int soma = a + b;

    printf("subtracao de %d e %d é %d\n", a, b, a - b); // int subtracao = a - b;

    printf("multiplicação de %d e %d é %d\n", a, b, a * b); // int mult = a * b;

    printf("divisao de %d e %d é %d\n", a, b, a / b); // int divisao = a / b;

    return 0;
}