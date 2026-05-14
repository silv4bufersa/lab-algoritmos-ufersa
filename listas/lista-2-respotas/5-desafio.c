#include <stdio.h>

int main(void)
{
    int idade = 0;
    float porcentagem_pessoas_18_30 = 0.0;
    int soma_idade = 0;
    double altura = 0.0;
    int qtd_pessoas = 2;
    double media_idade = 0;
    int pessoas_maiores_180 = 0;
    float pessoas_entre_18_30 = 0;

    for (int i = 1; i <= qtd_pessoas; i++)
    {
        printf("\nDigite a idade da %dª pessoa: ", i);
        scanf("%d", &idade);
        soma_idade = soma_idade + idade;

        if ((idade > 18) && (idade < 30))
        {
            pessoas_entre_18_30++;
        }

        printf("Digite a altura da %dª pessoa: ", i);
        scanf("%lf", &altura);

        if (altura > 1.80)
        {
            pessoas_maiores_180++;
        }
    }

    printf("\n\nResultados\n\n");

    media_idade = (soma_idade / qtd_pessoas);
    printf("Média das Idades: %.2f\n", media_idade);

    printf("Pessoas com altura superior à 1.80: %d\n", pessoas_maiores_180);

    porcentagem_pessoas_18_30 = (pessoas_entre_18_30 / qtd_pessoas) * 100;
    printf("Porcentagem de pessoas entre 18 e 30 anos: %.1f%%", porcentagem_pessoas_18_30);

    return 0;
}