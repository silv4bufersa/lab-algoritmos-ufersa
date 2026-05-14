#include <stdio.h>

int main(void)
{
    int i; // iterator ou iterador.
    printf("\nÍmpares e Pares\n\n");

    printf("\nPares\n\n");
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("\n\nÍmpares\n\n");
    for (i = 1; i <= 10; i++) // i-- é a mesma coisa que i = i - 1
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}