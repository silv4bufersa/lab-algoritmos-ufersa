# Lista de Exercícios: Lógica de Programação em C

**Instruções:** Para todos os exercícios abaixo, declare as variáveis e atribua valores diretamente no código (ex: `int idade = 20;`). O objetivo é praticar a estrutura da linguagem e a lógica dos comandos.

**Envio:** O envio dessa lista deve ser um único arquivo compactado **.zip** ou **.rar** contendo todos os arquivos **.c** escritos. O nome do arquivo compactado deve ser seu nome e sobre, seguido de sua matrícula. Ex.: **bruno_silva_1352853.zip**.

**Ferramentas:** Para testar os códigos em um ambiente "seguro", recomendo a ferramenta [onlinegdb](https://www.onlinegdb.com/) ou [compilador online da programiz](https://www.programiz.com/c-programming/online-compiler/), ferramenta online uteis para estudo de C.

**IA:** O uso de IA é interessante, desde que ajude no processo do aprendizado, tendo em mente que a avaliação é manuscrita, então é importante entender/aprender os conceitos e estrutura dos códigos desenvolvidos.

## Questões Progressivas

### Estruturas de Repetição (10 Questões)

1. **Contagem Regressiva:** Escreva um programa que exiba uma contagem de 10 até 1 utilizando a estrutura `for`.
2. **Soma Acumulada:** Utilizando um laço `while`, peça para o usuário inserir números inteiros. O programa deve parar quando o usuário digitar `0` e, ao final, exibir a soma total.
3. **Tabuada Dinâmica:** Solicite um número ao usuário e exiba a tabuada de 1 a 10 desse número utilizando a estrutura `for`.
4. **Validação de Entrada:** Use um laço `do-while` para forçar o usuário a digitar uma nota entre 0 e 10. Enquanto o valor for inválido, o programa repete a pergunta.
5. **Potenciação Manual:** Peça uma base e um expoente ao usuário e calcule o resultado sem funções prontas.
    * *Explicação:* A **Potenciação** é a multiplicação de um número (base) por ele mesmo várias vezes, conforme indicado pelo expoente (ex: 2^3 é 2 x 3 x 2).
6. **Média de Turma:** Pergunte quantos alunos existem na sala. Usando `for`, peça a nota de cada um e mostre a **Média Aritmética**.
    * *Explicação:* A **Média Aritmética** é a soma de todos os valores dividida pela quantidade total de elementos somados.
7. **Cálculo de Fatorial:** Crie um programa que receba um número inteiro e calcule o seu **Fatorial** utilizando `while`.
    * *Explicação:* O **Fatorial** de um número é o produto dele por todos os seus antecessores inteiros positivos (ex: o fatorial de 4, ou 4!, é 4 x 3 x 2 x 1 = 24).
8. **Quadrados Perfeitos:** Exiba todos os **Quadrados Perfeitos** de 1 até 100 utilizando a repetição de sua preferência.
    * *Explicação:* Um **Quadrado Perfeito** é um número que resulta da multiplicação de um número inteiro por ele mesmo (ex: 2 x 2 = 4; 3 x 3 = 9; 4 x 4 = 16).
9. **Sequência de Fibonacci:** Imprima os 10 primeiros termos da **Sequência de Fibonacci** utilizando um laço de repetição.
    * *Explicação:* Na **Sequência de Fibonacci**, cada número seguinte é a soma dos dois anteriores (ex: 1, 1, 2, 3, 5, 8, 13...).
10. **Menu de Opções:** Crie um programa que exiba um menu de serviços. Use `do-while` para que o menu se repita até que o usuário escolha a opção "Sair".

### Desafios (Repetição + Condicionais)

1. **Filtro de Pares e Ímpares:** Peça ao usuário 10 números. Ao final, exiba a soma apenas dos **Pares** e a média apenas dos **Ímpares**.
    * *Explicação:* **Pares** são números divisíveis por 2 (resto zero). **Ímpares** são números que, ao serem divididos por 2, deixam resto 1.
2. **O Maior e o Menor:** Receba números positivos até que um negativo seja digitado. O programa deve identificar, entre os positivos, qual foi o maior e o menor valor informado.
3. **Verificador de Números Primos:** Peça um número e descubra se ele é um **Número Primo**.
    * *Explicação:* Um **Número Primo** é aquele que possui exatamente dois divisores: o número 1 e ele mesmo.
4. **Simulador de Caixa Eletrônico:** Peça um valor de saque e calcule a menor quantidade de notas de 50, 20 e 10 necessária usando laços para subtrair os valores conforme as notas são "entregues".
5. **Análise de Dados Populacionais:** Peça idade e altura de 15 pessoas. Ao final, use condicionais dentro do laço para calcular:
    * A média de idade.
    * O total de pessoas com altura superior a 1,80m.
    * A **Porcentagem** de pessoas entre 18 e 30 anos.
    * *Explicação:* A **Porcentagem** representa uma parte de um total de 100 unidades (ex: se 3 de 15 pessoas estão na faixa de idade, a porcentagem é (3 / 15) x 100.
