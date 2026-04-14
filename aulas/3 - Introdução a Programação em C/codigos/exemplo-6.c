#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int a = 5, b = 3, resultado;
    // Menor
    resultado = (a < b);
    printf("%d < %d é %d\n", a, b, resultado);
    // Maior ou igual
    resultado = (a >= b);
    printf("%d >= %d é %d\n", a, b, resultado);
    // Menor ou Igual
    resultado = (a <= b);
    printf("%d <= %d é %d\n", a, b, resultado);

    return 0;
}