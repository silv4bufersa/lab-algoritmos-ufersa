#include <stdio.h>
int main(void)
{
    int i;
    printf("Múltiplos de 5 entre 1 e 50:\n");
    for (i = 1; i <= 50; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d é múltiplo de 5\n", i);
        }
    }
    return 0;
}
