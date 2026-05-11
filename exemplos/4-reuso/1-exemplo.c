#include <stdio.h>
#include <locale.h>

// função menu(): não recebe nada e retorna um inteiro.
int menu(void)
{
    int opcao_menu = 0;
    printf("\n=== Minha Calculadora ===");
    printf("\n1 - Soma");
    printf("\n2 - Subtração");
    printf("\n3 - Multiplicação");
    printf("\n4 - Divisão");
    printf("\n0 - Sair\n");
    printf("\nOpção: ");
    scanf("%d", &opcao_menu);
    return opcao_menu;
}

int coleta_numero(int ordem)
{
    int numero;
    printf("Escolha o %dº número: ", ordem);
    scanf("%d", &numero);
    return numero;
}

int soma(int n1, int n2)
{
    int soma = n1 + n2;
    return soma;
}

int subtracao(int n1, int n2)
{
    int subtracao = n1 - n2;
    return subtracao;
}

int multiplicao(int n1, int n2)
{
    int multiplicao = n1 * n2;
    return multiplicao;
}

double divisao(double n1, double n2)
{
    double divisao = n1 / n2;
    return divisao;
}

int main(void)
{
    setlocale(LC_ALL, ".UTF8"); // ignora
    int n1, n2, resultado;
    double resultado_divi;
    int opcao = 0;
    do
    {
        opcao = menu();
        switch (opcao)
        {
        case 1:
            printf("\n\nOpção de SOMA\n\n");
            n1 = coleta_numero(1);
            n2 = coleta_numero(2);
            resultado = soma(n1, n2);
            printf("\nRESULTADO: %d\n", resultado);
            break;
        case 2:
            printf("\n\nOpção de SUBTRAÇÃO\n\n");
            n1 = coleta_numero(1);
            n2 = coleta_numero(2);
            resultado = subtracao(n1, n2);
            printf("\nRESULTADO: %d\n", resultado);
            break;
        case 3:
            printf("\n\nOpção de MULTIPLICAÇÃO\n\n");
            n1 = coleta_numero(1);
            n2 = coleta_numero(2);
            resultado = multiplicao(n1, n2);
            printf("\nRESULTADO: %d\n", resultado);
            break;
        case 4:
            printf("\n\nOpção de DIVISÃO\n\n");
            n1 = coleta_numero(1);
            n2 = coleta_numero(2);
            resultado_divi = divisao(n1, n2);
            printf("\nRESULTADO: %.2f\n", resultado_divi);
            break;
        case 0:
            printf("\n\nSAINDO ...\n\n");
            opcao = 0;
            break;
        default:
            printf("\n\nOpção inválida.\n\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}