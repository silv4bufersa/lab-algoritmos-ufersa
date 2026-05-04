#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, ".UTF8");
    float n1, n2, n3, n4, media;
    printf("Digite a 1ª: ");
    scanf("%f", &n1);
    printf("Digite a 2ª: ");
    scanf("%f", &n2);
    printf("Digite a 3ª: ");
    scanf("%f", &n3);
    printf("Digite a 4ª: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("Media final é: %.2f", media);
    return 0;
}