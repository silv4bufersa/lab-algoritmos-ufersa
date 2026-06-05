#include <stdio.h>
#include <locale.h>

// declarando definições
#define tamanho_inicial 100

// declarando uma função
void exibe_lista(int lista[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("\nValor da posição %d: %d", i + 1, lista[i]);
    }
}

void edita_lista(int lista[], int pos, int valor)
{
    lista[pos] = valor;
}

float calcula_media(int lista[], int tam)
{
    float soma_temp = 0.0, media_temp = 0.0;
    for (int i = 0; i < tam; i++)
    {
        soma_temp = soma_temp + lista[i];
        printf("Soma atual: %.2f\n", soma_temp);
    }

    media_temp = soma_temp / tam;
    return media_temp;
}

int main(void)
{
    setlocale(LC_ALL, "UTF8");
    int total_elementos = 4;
    float media_lista = 0.0;

    printf("LISTA EM C\n");
    // declarando uma lista
    int lista_notas[100] = {10, 6, 9, 7};

    // percorrer e exibir valores da lista
    printf("\nLISTA ANTES DA MODIFICAÇÃO:\n");
    exibe_lista(lista_notas, total_elementos);

    // alterar valores da lista
    lista_notas[0] = 1;
    lista_notas[1] = 2;
    lista_notas[2] = 3;
    lista_notas[3] = 4;

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO:\n");
    exibe_lista(lista_notas, total_elementos);

    edita_lista(lista_notas, 0, 10); // vai ser "removido"
    edita_lista(lista_notas, 1, 15);
    edita_lista(lista_notas, 2, 20);
    edita_lista(lista_notas, 3, 25);

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO (NOTA: 0):\n");
    exibe_lista(lista_notas, total_elementos);

    // removendo elemento da lista
    for (int i = 0; i < total_elementos - 1; i++)
    {
        lista_notas[i] = lista_notas[i + 1]; // O elemento da frente (i+1) copia seu valor para o atual (i)
    }
    total_elementos--;

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO (REMOVER: Pos 0):\n");
    exibe_lista(lista_notas, total_elementos);

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO (ADICIONANDO NOTA AO FINAL (Adicionando 9)):\n");
    // adicionar elemento na lista
    // tamanho 100 (validar se o total_elementos vai passar de 100)

    printf("----------------------> (antes) Total elementos: %d", total_elementos);
    exibe_lista(lista_notas, total_elementos);
    lista_notas[total_elementos] = 9; // "pilha" [nota1, nota2, nota3, nova_nota]

    total_elementos++;
    printf("\n----------------------> (depois) Total elementos: %d", total_elementos);
    exibe_lista(lista_notas, total_elementos);

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO (REMOVER: Pos 0):\n");
    exibe_lista(lista_notas, total_elementos);

    printf("\n\nLISTA DEPOIS DA MODIFICAÇÃO (MÉDIA):\n");
    media_lista = calcula_media(lista_notas, total_elementos);
    printf("Média: %.2f", media_lista);

    return 0;
}