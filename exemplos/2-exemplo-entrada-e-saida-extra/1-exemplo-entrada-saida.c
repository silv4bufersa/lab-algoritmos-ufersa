#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{

    int opcao = 0;

    setlocale(LC_ALL, ".UFT8");
    printf("Aperte enter para começar...");
    getchar();

    do
    {
        printf("\nMenu\n\n");
        printf("1 - Usar calculadora\n");
        printf("2 - Escrever seu nome\n");
        printf("0 - Sair/Encerrar\n");
        printf("\nOpção: ");
        scanf("%d", &opcao);
        printf("\nOpção escolhda: %d\n", opcao);

        switch (opcao)
        {
        case 1:
            printf("\nCalculadora\n");
            break;
        case 2:
            printf("\nEscrever seu nome\n");
            break;
        default:
            printf("\nSaíndo ...\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}