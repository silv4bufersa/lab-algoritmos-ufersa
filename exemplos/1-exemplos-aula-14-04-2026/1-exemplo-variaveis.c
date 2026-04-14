#include <stdio.h>
int main(void)
{
    int inteiro;
    float ponto_flutante;
    char letra;
    double duas_casas;
    _Bool boleano; // 1 ou 0

    inteiro = 10;
    ponto_flutante = 3.1;
    letra = 'b';
    duas_casas = 1.852;
    boleano = 1;

    printf("int: %d\n", inteiro);
    printf("float: %.2f\n", ponto_flutante);
    printf("double: %.2f\n", duas_casas);
    printf("char: '%c'\n", letra);
    printf("boolean: %d", boleano);

    return 0;
}
