#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int idade = 0;
    // 1 = verdadeiro
    // 0 = falso
    while (idade >= 0)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Idade digitada: %d\n", idade);
    }
    return 0;
}