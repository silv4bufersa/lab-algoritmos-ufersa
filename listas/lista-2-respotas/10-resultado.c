#include <stdio.h>
#include <locale.h>

int main(void)
{
    int opcao = 1;
    setlocale(LC_ALL, ".UTF8");

    do
    {
        printf("CALCULADORA\n");
        printf("\n1 - Soma");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n0 - Sair\n");
        printf("\nOpção selecionada: ");
        scanf("%d", &opcao);
    } while (opcao != 0);

    opcao = 1;
    printf("%d\n", opcao);

    while (opcao != 0)
    {
        printf("CALCULADORA\n");
        printf("\n1 - Soma");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n0 - Sair\n");
        printf("\nOpção selecionada: ");
        scanf("%d", &opcao);
    }

    return 0;
}