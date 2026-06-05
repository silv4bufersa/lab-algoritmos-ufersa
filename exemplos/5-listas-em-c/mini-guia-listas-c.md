<!-- markdownlint-disable MD001 -->
# Guia Definitivo: Listas Simples (Vetores) em C

Imagine uma lista como um **estojo de remédios semanal**. Ele tem um tamanho fixo (por exemplo, 5 compartimentos) e cada portinha tem um número de identificação chamado **índice**.

### Regras de Ouro antes de começar

1. **O tamanho é fixo:** Se você criou uma lista com 5 espaços, ela terá 5 espaços até o programa fechar.
2. **A contagem começa no Zero (0):** Se a lista tem tamanho 5, os índices são `0, 1, 2, 3 e 4`.

---

## 1. Criando (Declarando) a Lista

Para começar, precisamos dizer ao C o tipo de dado, o nome da lista e o tamanho dela entre colchetes `[]`.

```c
// Criando uma lista para guardar 5 notas inteiras
int notas[5] = {10, 20, 30, 40, 50};

// Também precisamos de uma variável para controlar quantos elementos reais estamos usando
int total_elementos = 5;

```

---

## 2. Percorrendo (Navegando) na Lista

Para olhar, imprimir ou usar os valores da lista, usamos o laço `for`. A variável `i` vai funcionar como o nosso dedo, apontando para cada índice da lista, um por um.

### Opção A: Percorrer do Início ao Fim (Padrão)

```c
printf("Exibindo a lista do comeco ao fim:\n");
for (int i = 0; i < total_elementos; i++) {
    printf("Posicao %d: %d\n", i, notas[i]);
}

```

### Opção B: Percorrer de Trás para Frente (Invertido)

Às vezes você precisa ler os dados na ordem inversa. Para isso, começamos o `i` no último índice válido (`total_elementos - 1`) e vamos voltando até o `0`.

```c
printf("Exibindo a lista de tras para frente:\n");
for (int i = total_elementos - 1; i >= 0; i--) {
    printf("Posicao %d: %d\n", i, notas[i]);
}

```

---

## 3. Editando (Alterando) um Elemento

Editar é a operação mais simples. Se você sabe o índice (a posição) do elemento que quer mudar, basta usar o sinal de igual `=` para gravar o novo valor por cima do antigo.

```c
// Digamos que a nota na posição 1 estava errada (era 20) e queremos mudar para 85
notas[1] = 85;

// Agora, se imprimirmos a lista, a posição 1 valerá 85.

```

---

## 4. Excluindo (Removendo) um Elemento

Como não podemos diminuir o tamanho físico do vetor, a exclusão funciona como uma **fila de cadeiras**: se alguém sai do meio da fila, todo mundo que estava atrás precisa chegar uma cadeira para o lado esquerdo para não deixar um buraco vazio.

### O Código de Exclusão

Para apagar o elemento da **posição 2** (que originalmente é o número 30):

```c
int posicao_para_excluir = 2;

// O laço começa na posição que queremos apagar e puxa os elementos da direita
for (int i = posicao_para_excluir; i < total_elementos - 1; i++) {
    notas[i] = notas[i + 1]; // O elemento da frente (i+1) copia seu valor para o atual (i)
}

// CRUCIAL: Diminuímos o nosso contador de elementos ativos
total_elementos--;

```

---

## Código Completo Pronto para Testar

Aqui está tudo o que aprendemos compactado em um único programa para você rodar no seu computador e ver a mágica acontecer:

```c
#include <stdio.h>

int main() {
    // 1. CRIANDO
    int lista[5] = {10, 20, 30, 40, 50};
    int total = 5;

    // 2. PERCORRENDO (Original)
    printf("--- Lista Original ---\n");
    for(int i = 0; i < total; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n\n");

    // 3. EDITANDO (Mudando o 20 para 85 na posicao 1)
    lista[1] = 85;
    printf("--- Lista Apos Editar a Posicao 1 ---\n");
    for(int i = 0; i < total; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n\n");

    // 4. EXCLUINDO (Removendo o elemento da posicao 2, que mudou para 30)
    int apagar = 2;
    for(int i = apagar; i < total - 1; i++) {
        lista[i] = lista[i + 1];
    }
    total--; // Reduz o tamanho lógico

    // PERCORRENDO APÓS EXCLUSÃO
    printf("--- Lista Apos Excluir a Posicao 2 ---\n");
    for(int i = 0; i < total; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}

```

### O que vai aparecer na tela

```text
--- Lista Original ---
10 20 30 40 50

--- Lista Apos Editar a Posicao 1 ---
10 85 30 40 50

--- Lista Apos Excluir a Posicao 2 ---
10 85 40 50

```
