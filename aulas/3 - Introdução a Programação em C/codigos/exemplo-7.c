#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int a = 1, b = 1;

    int resultado = (a && b); // AND (E)
    printf("%d && %d é %d\n", a, b, resultado);
    resultado = (a || b); // OR (OU)
    printf("%d || %d é %d\n", a, b, resultado);
    resultado = !a; // NOT (NÃO)
    printf("!%d é %d\n", a, resultado);
    resultado = (a && b) || !a; // Combinação de operadores lógicos
    printf("(%d && %d) || !%d é %d\n", a, b, a, resultado);

    return 0;
}