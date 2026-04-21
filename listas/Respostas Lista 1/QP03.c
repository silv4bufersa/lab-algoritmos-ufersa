#include <stdio.h>

int main(){
    float nota1 = 7.5;
    float nota2 = 8.0;
    float nota3 = 6.5;
    float nota4 = 9.0;

    // se vai usar divisao, eh bom usar float para evitar erros
    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    // aqui usamos o %.2f para limitar a impressao a 2 casas decimais
    printf("A media das notas eh: %.2f\n", media);
    return 0;
}