#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    // pergunte a idade, pelo menos, uma vez. (do-while).
    int idade = -1;
    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Idade digitada: %d\n", idade);
    } while (idade >= 0);
    return 0;
}