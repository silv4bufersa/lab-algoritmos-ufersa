#include <stdio.h>

int main() {
    int horasTrabalhadas = 40; 
    int valorHora = 15;

    float salario = horasTrabalhadas * valorHora;

    // aqui usamos o %.2f para limitar a impressao a 2 casas decimais, mantendo o formato R$00.00
    printf("O salario total eh: R$ %.2f\n", salario);
    return 0;
}