#include <stdio.h>

int main(void)
{
    int contador_normal = 1;
    int contador_alternativo = 100;

    printf("Contador Normal (incrementando).\n");
    while (contador_normal <= 10)
    {
        printf("Repetição do while: %d\n", contador_normal);
        contador_normal = contador_normal + 1; // ou contador_normal++;
    }

    printf("\nContador Alternativo (decrementando).\n");
    while (contador_alternativo >= 0)
    {
        printf("Repetição do while: %d\n", contador_alternativo);
        contador_alternativo--;
    }

    return 0;
}