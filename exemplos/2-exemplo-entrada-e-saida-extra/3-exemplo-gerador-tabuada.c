#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int numero, tam_tabuada, opcao;
    double numero_div;
    do
    {
        printf("\n\nGerador de Tabuada\n");
        printf("\n1 - Soma");
        printf("\n2 - Subtração");
        printf("\n3 - Multiplicação");
        printf("\n4 - Divisão");
        printf("\n0 - Sair");
        printf("\n\nOpção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOperação de Soma");
            printf("\nNúmero para a tabuada: ");
            scanf("%d", &numero);
            printf("Tamanho da tabuada: ");
            scanf("%d", &tam_tabuada);
            for (int i = 1; i <= tam_tabuada; i++)
            {
                printf("\n%d + %d = %d", numero, i, (numero + i));
            }
            break;
        case 2:
            printf("\nOperação de Subtração");
            printf("\nNúmero para a tabuada: ");
            scanf("%d", &numero);
            printf("Tamanho da tabuada: ");
            scanf("%d", &tam_tabuada);
            for (int i = 1; i <= tam_tabuada; i++)
            {
                printf("\n%d - %d = %d", numero, i, (numero - i));
            }
            break;
        case 3:
            printf("\nOperação de Multiplicação");
            printf("\nNúmero para a tabuada: ");
            scanf("%d", &numero);
            printf("Tamanho da tabuada: ");
            scanf("%d", &tam_tabuada);
            for (int i = 1; i <= tam_tabuada; i++)
            {
                printf("\n%d * %d = %d", numero, i, (numero * i));
            }
            break;
        case 4:
            printf("\nOperação de Divisão");
            printf("\nNúmero para a tabuada: ");
            scanf("%lf", &numero_div);
            printf("Tamanho da tabuada: ");
            scanf("%d", &tam_tabuada);
            for (int i = 1; i <= tam_tabuada; i++)
            {
                printf("\n%.2lf / %d = %.2lf", numero_div, i, numero_div / i);
            }
            break;
        case 0:
            printf("\nSaindo ...");
            opcao = 0;
            break;
        default:
            printf("\nOpção inválida ...");
        }
    } while (opcao != 0);
    return 0;
}