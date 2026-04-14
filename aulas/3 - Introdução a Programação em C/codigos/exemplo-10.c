#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int idade = 30;
    if (idade < 18)
    {
        printf("Você é menor de idade.\n");
    }
    else
    {
        printf("Você é maior de idade.\n");
    }
    return 0;
}