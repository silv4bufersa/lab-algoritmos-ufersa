#include <stdio.h>
#include <locale.h>

int main(void)
{
    int qtd_tabuada, tabuada, multiplicando, multiplicador, multiplicacao;
    setlocale(LC_ALL, ".UTF8");

    printf("Quantidade de tabuadas a serem exibidas: ");
    scanf("%d", &qtd_tabuada);

    /*
    1º Iteração for externo (tabuada).
                      1ª i for-i  2ª i for-i  3ª i for-i       10ª i for-i
        tabuada       :  1      :    1      :    1      : ... :    1
        multiplicador :  1      :    2      :    3      : ... :    10
        multiplicação :  1      :    2      :    3      : ... :    10

    2º Iteração for externo (tabuada).
                      1ª i for-i  2ª i for-i  3ª i for-i       10ª i for-i
        tabuada       :  2      :    2      :    2      : ... :    2
        multiplicador :  1      :    2      :    3      : ... :    10
        multiplicação :  2      :    4      :    6      : ... :    20

    ...

    10º Iteração for externo (tabuada).
                      1ª i for-i  2ª i for-i  3ª i for-i        10ª i for-i
        tabuada       :  10      :    10     :    10     : ... :    10
        multiplicador :  1       :    2      :    3      : ... :    10
        multiplicação :  10      :    20     :    30     : ... :    100
    */

    for (tabuada = 1; tabuada <= qtd_tabuada; tabuada++)
    {
        printf("\n\n ===== Tabuada de %d ===== \n\n", tabuada);
        for (multiplicador = 1; multiplicador <= 10; multiplicador++)
        {
            multiplicacao = tabuada * multiplicador;
            printf("%d x %d = %d\n", tabuada, multiplicador, multiplicacao);
        }
    }
    return 0;
}