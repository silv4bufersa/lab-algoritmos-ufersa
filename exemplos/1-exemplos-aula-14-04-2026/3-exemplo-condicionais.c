#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UFT8");

    /*
        Criança: 0 até 14
        Adolecente: 15 até 17
        Adulto: 18 até 59
        Idoso: 60 até 79
        Ancião: 80 até morrer
    */

    int idade = 101;

    if (idade <= 14)
    {
        printf("Essa pessoa é uma criança.\nIdade: %d anos\n", idade);
    }
    else if ((idade >= 15) && (idade <= 17))
    {
        printf("Essa pessoa é um adolecente.\nIdade: %d anos\n", idade);
    }
    else if ((idade >= 18) && (idade <= 59))
    {
        printf("Essa pessoa é um adulto.\nIdade: %d anos\n", idade);
    }
    else if ((idade >= 60) && (idade <= 79))
    {
        printf("Essa pessoa é um idoso.\nIdade: %d anos\n", idade);
    }
    else if ((idade >= 80) && (idade <= 100))
    {
        printf("Essa pessoa é um ancião.\nIdade: %d anos\n", idade);
    }
    else
    {
        printf("Tá com bexiga taboca! Velhor do C#$@*$o.\nIdade: %d anos\n", idade);
    }

    return 0;
}