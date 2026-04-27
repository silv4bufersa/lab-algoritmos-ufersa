#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int i, j;
    for (i = 20, j = 1; i > 0; i--, j++)
    {
        printf("%dª iteração: %d", j, i);
        getchar(); // pausa o terminal esperando um enter
    }
    return 0;
}