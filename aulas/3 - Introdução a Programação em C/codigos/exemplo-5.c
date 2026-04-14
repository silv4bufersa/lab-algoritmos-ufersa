#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int a = 5, b = 3;
    // Igualdade
    int resultado = (a == b);
    printf("%d == %d é %d\n", a, b, resultado);
    // Diferença
    resultado = (a != b);
    printf("%d != %d é %d\n", a, b, resultado);
    // Maior
    resultado = (a > b);
    printf("%d > %d é %d\n", a, b, resultado);

    return 0;
}