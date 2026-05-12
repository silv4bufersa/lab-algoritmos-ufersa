// Crie um programa que peça números ao usuário usando while. O laço deve parar quando o usuário digitar um número negativo. Ao final, exiba a soma de todos os números positivos digitados.
#include <stdio.h>
int main(void)
{
    int num = 0, soma = 0;

    while (num >= 0)
    {
        printf("Insira os números: ");
        scanf("%d", &num);
        if (num >= 0)
        {
            soma = soma + num;
        }

        printf("A soma dos numeros informados é: %d\n", soma);
    }

    return 0;
}