# Lista de Exercícios: Lógica de Programação em C

**Instruções:** Para todos os exercícios abaixo, declare as variáveis e atribua valores diretamente no código (ex: `int idade = 20;`). O objetivo é praticar a estrutura da linguagem e a lógica dos comandos.

**Envio:** O envio dessa lista deve ser um único arquivo compactado **.zip** ou **.rar** contendo todos os arquivos **.c** escritos. O nome do arquivo compactado deve ser seu nome e sobre, seguido de sua matrícula. Ex.: **bruno_silva_1352853.zip**.

**Ferramentas:** Para testar os códigos em um ambiente "seguro", recomendo a ferramenta [onlinegdb](https://www.onlinegdb.com/) ou [compilador online da programiz](https://www.programiz.com/c-programming/online-compiler/), ferramenta online uteis para estudo de C.

**IA:** O uso de IA é interessante, desde que ajude no processo do aprendizado, tendo em mente que a avaliação é manuscrita, então é importante entender/aprender os conceitos e estrutura dos códigos desenvolvidos.

## Questões Progressivas

1. **Soma de Pesos:** Crie três variáveis para armazenar o peso de três objetos. Calcule o peso total e exiba na tela.
2. **Cálculo de Salário:** Declare uma variável para as horas trabalhadas e outra para o valor da hora. Calcule e exiba o salário total.
3. **Média Escolar:** Atribua quatro notas a quatro variáveis diferentes. Calcule a média final e mostre o resultado.
4. **Conversor de Dias:** Crie uma variável que armazena uma quantidade de dias. Converta esse valor para horas e exiba (considerando que 1 dia = 24 horas).
5. **Comparação de Valores:** Declare duas variáveis, `x` e `y`. Imprima qual delas é a maior ou se são iguais.
6. **Classificação de Idade:** Atribua um valor a uma variável `idade`. Se for menor que 18, exiba "Menor de idade"; caso contrário, exiba "Maior de idade".
7. **Verificador de Temperatura:** Crie uma variável `clima`. Se o valor for maior que 30, exiba "Está calor"; se for menor que 15, exiba "Está frio"; entre esses valores, exiba "Clima agradável".
8. **Desconto em Compra:** Atribua um valor a uma variável `totalCompra`. Se o valor for acima de 100 reais, aplique um desconto de 10% (multiplicando por 0.9) e exiba o novo valor. Caso contrário, exiba o valor original.
9. **Aprovação Simples:** Crie uma variável `frequencia` (de 0 a 100). Se a frequência for maior ou igual a 75, exiba "Frequência OK"; caso contrário, exiba "Frequência Baixa".
10. **Contador Padrão:** Use um laço `while` para exibir os números de 1 a 10.
11. **Contagem Regressiva:** Use um laço `for` para exibir os números de 20 até 1.
12. **Acumulador de Soma:** Use um laço para somar todos os números de 1 a 10 e, ao final, exiba apenas o resultado total da soma.
13. **Repetição de Texto:** Declare uma variável com um número inteiro. Use um laço para imprimir a frase "Aprendendo C" na tela tantas vezes quanto o valor dessa variável.
14. **Filtro de Pares:** Use um laço `for` para percorrer de 1 a 20, mas só imprima os números que forem pares.

15. **Soma Condicional:** Percorra os números de 1 a 15. Se o número for maior que 10, some-o a uma variável `total`. Ao final, exiba o `total`.
16. **Alternância de Símbolos:** Use um laço para imprimir 10 vezes o símbolo `#`, mas use um `if` dentro do laço para que, nas posições ímpares, ele imprima um `@` em vez de `#`.
17. **Contagem de Ocorrências:** Crie um laço que vá de 1 a 50. Dentro dele, use uma condicional para contar quantos números são múltiplos de 5. Exiba o contador final.
18. **Quadrado de Asteriscos:** Utilize laços aninhados (um `for` dentro de outro) para imprimir um quadrado de 5x5 feito de asteriscos `*`.
19. (desafio) **Linha Crescente:** Utilize laços aninhados para imprimir 5 linhas. A primeira linha deve ter 1 asterisco, a segunda 2, e assim por diante até a quinta linha.
20. **Menu de Repetição (Simulação):** Use um `do-while` que execute 3 vezes. Em cada execução, simule a exibição de um "Processando item..." seguido do número da iteração atual.

## Desafios

1. **Controle de Saldo:** Crie uma variável `saldo_inicial`. Simule três operações de débito (subtração) atribuindo valores a três variáveis diferentes. Ao final, exiba o saldo restante e uma mensagem: "Saldo Positivo" se for maior que zero, ou "Saldo Negativo" caso contrário.
2. **Contador de Passos:** Imagine um objetivo de caminhar 1000 passos. Crie uma variável que comece em 0 e, usando um laço, incremente-a de 100 em 100 até atingir ou ultrapassar 1000. Imprima o valor em cada etapa.
3. **Simulador de Login:** Crie uma variável `tentativas`. Use um laço `while` para incrementar essa variável de 1 até 3. Dentro do laço, imprima "Tentativa X de 3... Acesso negado". Após o laço, imprima "Conta bloqueada".
4. **Cálculo de Bônus:** Atribua um valor de `vendas` a uma variável. Se as vendas forem acima de 5000, o bônus é de 500 reais. Se forem entre 2000 e 5000, o bônus é de 200. Abaixo disso, o bônus é zero. Exiba o valor do bônus final.
5. **Média de Temperaturas:** Atribua três temperaturas a três variáveis (representando Manhã, Tarde e Noite). Calcule a média. Se a média for superior a 25, exiba "Dia Quente"; caso contrário, exiba "Dia Agradável".
6. **Multiplicação sem Operador `*`:** Atribua dois valores a `a` e `b`. Calcule o resultado de `a * b` usando apenas um laço `for` e somas sucessivas (ex: 3 * 4 é 3+3+3+3). Exiba o resultado final.
7. **Filtro de Intervalo:** Use um laço para percorrer os números de 10 a 50. Dentro dele, use uma condicional para imprimir apenas os números que estão entre 20 e 30 OU entre 40 e 45.
8. **Desenho de Retângulo:** Use laços aninhados para criar um retângulo de asteriscos `*` que tenha 3 linhas de altura e 10 colunas de largura.
9. **Triângulo de Números:** Utilize laços aninhados para imprimir o seguinte padrão (até a linha 5):

    ```text
    1
    22
    333
    4444
    55555
    ```

10. **Desenho de Triângulo Invertido:** Use laços aninhados para imprimir 5 linhas de asteriscos, começando com 5 na primeira linha e diminuindo um por linha até chegar em 1.

    ```text
    *****
    ****
    ***
    **
    *
    ```
