#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");

    int opcao, n1, n2, res;
    float dn1, dn2, dres;
    char deseja_sair;

    do
    {
        printf("\n--- Calculadora C ---\n\n");
        printf("1 - Soma\n");
        printf("2 - Subitração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão (validando o dividendo)\n");
        printf("0 - Sair\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOperação de Soma\n\n");
            printf("\nDigite o 1º número: ");
            scanf("%d", &n1);
            printf("Digite o 2º número: ");
            scanf("%d", &n2);
            res = n1 + n2;
            printf("\nResultado da Operação: %d\n", res);
            break;
        case 2:
            printf("\nOperação de Subtração\n\n");
            printf("\nDigite o 1º número: ");
            scanf("%d", &n1);
            printf("Digite o 2º número: ");
            scanf("%d", &n2);
            res = n1 - n2;
            printf("\nResultado da Operação: %d\n", res);
            break;
        case 3:
            printf("\nOperação de Multiplicação\n\n");
            printf("\nDigite o 1º número: ");
            scanf("%d", &n1);
            printf("Digite o 2º número: ");
            scanf("%d", &n2);
            res = n1 * n2;
            printf("\nResultado da Operação: %d\n", res);
            break;
        case 4:
            printf("\nOperação de Divisão\n\n");
            printf("\nDigite o 1º número: ");
            scanf("%f", &dn1);
            do
            {
                printf("Digite o 2º número (não pode ser 0): ");
                scanf("%f", &dn2);
            } while (dn2 == 0.0);
            dres = dn1 / dn2;
            printf("\nResultado da Operação: %.2f\n", dres);
            break;
        case 0:
            getchar();
            printf("\nDeseja sair do APP (y/n): ");
            scanf("%c", &deseja_sair);

            if (deseja_sair == 'y')
            {
                printf("\nSaindo ...");
                break;
            }
            else
            {
                opcao = 1;
                printf("Voltando ao menu ...\n");
            }
            break;
        default:
            printf("\nOpção inválida");
        }
    } while (opcao != 0);

    return 0;
}