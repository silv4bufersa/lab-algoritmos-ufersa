#include <stdio.h>
#include <locale.h>

int main(void)
{
    int quadrado = 0;
    int contador = 1;

    setlocale(LC_ALL, ".UTF8");
    printf("==== Quadrados Perfeitos ==== \n\n");

    printf("Quadrado perfeito até: ");
    scanf("%d", &contador);

    for (int i = 1; i <= contador; i++)
    {
        quadrado = i * i;
        printf("Quadrado de %d é: %d * %d = %d\n", i, i, i, quadrado);
    }

    return 0;
}