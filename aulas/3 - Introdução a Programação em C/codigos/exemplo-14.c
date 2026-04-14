#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int i = 0;
    // executa pelo menos uma vez
    do
    {
        printf("%dª repetição do do-while.\n", i);
        i++;
    } while (i < 10);
    return 0;
}