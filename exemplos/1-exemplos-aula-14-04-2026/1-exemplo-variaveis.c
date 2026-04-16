#include <stdio.h>
#include <string.h>  // para lidar com strings (spoiler)
#include <stdbool.h> // para usar bool ao invés de _Bool

int main(void)
{
    int inteiro;
    float ponto_flutante;
    char letra;
    char nome[7];
    double duas_casas;
    _Bool boleano_nativo; // 1 ou 0 -> boleanos de 1 (verdadeiro) e 0 (falso)
    bool boleano_moderno;

    inteiro = 10;
    ponto_flutante = 3.1;
    letra = 'b';
    duas_casas = 1.852;
    boleano_nativo = 1;
    boleano_moderno = false;
    // forma de correta de atribuir strings a um vetor de caracteres
    strcpy(nome, "fulano");

    printf("int: %d\n", inteiro);
    printf("float: %.2f\n", ponto_flutante);
    printf("double: %.2f\n", duas_casas);
    printf("char: '%c'\n", letra);
    printf("chars: '%s'\n", nome);

    // ambas as formas (nativa e moderna) são printadas como 1 ou 0 (%d)
    printf("_Bool (nativo): %d\n", boleano_nativo);
    printf("bool (moderno): %d\n", boleano_moderno);

    // Para exibir a palavra, você precisa usar um operador ternário
    printf("bool (moderno): %s\n", boleano_moderno ? "true" : "false");

    return 0;
}
