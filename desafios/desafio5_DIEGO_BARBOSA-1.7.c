#include <stdio.h>
int main(void)
{
    float nota;
    do
    {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
    } while (nota < 0 || nota > 10);
}
