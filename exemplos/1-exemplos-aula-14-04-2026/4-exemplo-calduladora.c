#include <stdio.h>

int main(void)
{
    int multiplicador = 5, contador = 0;

    printf("--- Tabuada do %d ---\n\n", multiplicador);

    while (contador <= 10)
    {
        int resultado_multiplicacao = multiplicador * contador;
        printf("%d * %d = %d\n", multiplicador, contador, resultado_multiplicacao);
        contador++;
    }

    return 0;
}