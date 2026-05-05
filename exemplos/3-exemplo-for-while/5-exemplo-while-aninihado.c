#include <stdio.h>
#include <locale.h>

int main(void)
{
    int multiplicando, multiplicador, multiplicacao;
    int qtd_tabuada;
    int tabuada = 1;

    setlocale(LC_ALL, ".UTF8");

    printf("Quantidade de tabuadas a serem exibidas: ");
    scanf("%d", &qtd_tabuada);
    getchar();

    while (tabuada <= qtd_tabuada)
    {
        multiplicador = 1;
        printf("\n ===== Tabuada de %d ===== \n\n", tabuada);
        while (multiplicador <= 10)
        {
            multiplicacao = tabuada * multiplicador;
            printf("%d x %d = %d\n", tabuada, multiplicador, multiplicacao);
            multiplicador++;
        }
        tabuada++;
    }
    return 0;
}