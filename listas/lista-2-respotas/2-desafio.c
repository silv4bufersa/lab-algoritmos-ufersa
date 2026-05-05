#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int maior = 0, numero = -1;
    int menor;

    do
    {
        printf("Digite um número positivo (num. negativo p/ sair): ");
        scanf("%d", &numero);

        if (numero >= 0)
        {
            if (numero > maior)
            {
                printf("%d é maior %d! Atualizando o maior número da vez.\n", numero, maior);
                menor = numero;
                maior = numero;
            }
            if (numero < menor)
            {
                printf("%d é menor %d! Atualizando o maior número da vez.\n", numero, menor);
                menor = numero;
            }
        }
    } while (numero >= 0);

    printf("\nResultado:\n\n");
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d", menor);

    return 0;
}