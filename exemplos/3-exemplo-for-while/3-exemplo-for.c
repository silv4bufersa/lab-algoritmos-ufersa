#include <stdio.h>
#include <locale.h>

int main(void)
{
    int multiplicando, multiplicador, multiplicacao;
    setlocale(LC_ALL, ".UTF8");

    printf("Digite o multiplicando: ");
    scanf("%d", &multiplicando);

    for (multiplicador = 1; multiplicador <= 10; multiplicador++)
    {
        multiplicacao = multiplicando * multiplicador;
        printf("%d x %d = %d\n", multiplicando, multiplicador, multiplicacao);
    }
    return 0;
}