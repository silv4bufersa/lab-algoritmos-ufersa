#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int a = 5, b = 3;
    int maior = (a > b) ? a : b;
    printf("O maior número entre %d e %d é %d\n", a, b, maior);

    return 0;
}