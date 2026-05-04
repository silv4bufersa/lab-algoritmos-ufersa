#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    int frequencia = 0;

    do
    {
        printf("Frequência do aluno: ");
        scanf("%d", &frequencia);

        if ((frequencia >= 0) && ((frequencia <= 100)))
        {
            if (frequencia >= 75)
            {
                printf("Frequência Ok!\n");
            }
            else
            {
                printf("Frequência Baixa!\n");
            }
        }
        else
        {
            printf("Valor fora da faixa permitida (0-100).\n");
        }
    } while (0);

    // 1 - Verdadeiro e 0 - Falso

    // Desafio: aplicar condição de saída.

    return 0;
}