#include <stdio.h>

int main(void)
{
    int i; // iterator ou iterador.
    printf("\nContagem Regressiva\n\n");
    for (i = 10; i > 0; i--) // i-- é a mesma coisa que i = i - 1
    {
        printf("Contagem em: %d\n", i);
    }
    return 0;
}