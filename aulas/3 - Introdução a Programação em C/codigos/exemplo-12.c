#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    for (int i = 0; i < 10; i++)
    {
        printf("%dª iteração.\n", i);
    }
    return 0;
}