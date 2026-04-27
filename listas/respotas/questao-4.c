#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    float dia, horas;
    printf("Digite a quantidade de dias: ");
    scanf("%f", &dia);
    horas = dia * 24;
    printf("%.2f dia(s) é equivalente à %.2f horas.\n", dia, horas);
    printf("##:##"); // desafio, exibir nesse formato.
    return 0;
}