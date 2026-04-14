#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int i = 1;
    while (i <= 10)
    {
        printf("%dª repetição.\n", i);
        i++;
    }
    return 0;
}