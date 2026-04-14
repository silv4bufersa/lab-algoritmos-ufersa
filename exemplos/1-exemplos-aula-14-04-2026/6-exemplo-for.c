#include <stdio.h>

int main(void)
{
    int multiplicando = 7;

    printf("\nTabuada de %d\n\n", multiplicando);
    for (int iterator = 0; iterator <= 10; iterator++)
    {
        printf("%d * %d = %d\n", multiplicando, iterator, (multiplicando * iterator));
    }

    return 0;
}