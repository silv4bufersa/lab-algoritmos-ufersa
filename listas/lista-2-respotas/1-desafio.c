#include <stdio.h>
#include <locale.h>

int main(void)
{
    int numero = 0;
    int soma_pares = 0;
    int soma_impares = 0;
    int media_impares = 0;
    int contador_impares = 0;

    setlocale(LC_ALL, ".UTF8");
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            soma_pares = soma_pares + numero;
            printf("%d é PAR\n", numero);
        }
        else
        {
            contador_impares++;
            soma_impares = soma_impares + numero;
            printf("%d é ÍMPAR\n", numero);
        }
    }

    printf("\nResultado:\n\n");
    printf("Soma dos pares: %d\n", soma_pares);
    media_impares = soma_impares / contador_impares;
    printf("Média dos ímpares: %d", media_impares);

    return 0;
}