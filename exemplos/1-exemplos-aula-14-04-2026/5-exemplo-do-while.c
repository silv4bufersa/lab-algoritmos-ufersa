#include <stdio.h>

int main(void)
{
    int contador = 1;
    do
    {
        printf("Contador: %d\n", contador);
        contador++;
        printf("Contador (pós-incremento): %d\n", contador);
    } while (contador <= 10);

    return 0;
}