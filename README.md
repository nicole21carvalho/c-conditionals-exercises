# 🔀 Estruturas de Decisão em C

[![CI](https://github.com/nicole21carvalho/c-conditionals-exercises/actions/workflows/ci.yml/badge.svg)](https://github.com/nicole21carvalho/c-conditionals-exercises/actions/workflows/ci.yml)

13 exercícios em **linguagem C** com entrada de dados, cálculos e estruturas condicionais (`if`/`else`, operador ternário). Cada programa lê o teclado de forma segura, trata os casos especiais e tem casos de teste automatizados, rodando no CI com **GCC e Clang**.

## 📚 Exercícios

| # | Arquivo | O que faz |
|---|---|---|
| 1 | [`ex01_maior_que_dez.c`](src/ex01_maior_que_dez.c) | Diz se um valor é maior que 10 |
| 2 | [`ex02_positivo_negativo.c`](src/ex02_positivo_negativo.c) | Diz se um valor é positivo, negativo ou zero |
| 3 | [`ex03_compra_macas.c`](src/ex03_compra_macas.c) | Custo das maçãs, com preço menor a partir de uma dúzia |
| 4 | [`ex04_media_aprovacao.c`](src/ex04_media_aprovacao.c) | Média de duas notas e aprovação |
| 5 | [`ex05_pode_votar.c`](src/ex05_pode_votar.c) | Diz se a pessoa pode votar, pela idade |
| 6 | [`ex06_maior_valor.c`](src/ex06_maior_valor.c) | Maior entre dois valores |
| 7 | [`ex07_ordem_crescente.c`](src/ex07_ordem_crescente.c) | Dois valores em ordem crescente |
| 8 | [`ex08_duracao_jogo.c`](src/ex08_duracao_jogo.c) | Duração de um jogo que pode virar a meia-noite |
| 9 | [`ex09_salario_horas.c`](src/ex09_salario_horas.c) | Salário com hora extra acima de 160 horas |
| 10 | [`ex10_peso_ideal.c`](src/ex10_peso_ideal.c) | Peso ideal pela altura e pelo sexo |
| 11 | [`ex11_comissao_vendedor.c`](src/ex11_comissao_vendedor.c) | Salário com comissão em duas faixas |
| 12 | [`ex12_saldo_conta.c`](src/ex12_saldo_conta.c) | Saldo depois de débito e crédito |
| 13 | [`ex13_estoque_medio.c`](src/ex13_estoque_medio.c) | Decide se é preciso comprar mais estoque |

## 🧠 Decisões técnicas

- **Leitura segura do teclado ([`entrada.h`](src/entrada.h)):** lê a linha inteira, valida e pede de novo quando o valor é inválido, em vez de travar como o `scanf` puro. Aceita vírgula como separador decimal (`8,5`).
- **Casos de borda tratados:**
  - o zero não é positivo nem negativo (ex. 2);
  - dois valores iguais (ex. 6);
  - jogo que começa e termina no mesmo horário dura 24 horas (ex. 8);
  - notas fora de 0 a 10, horas fora de 0 a 23 e ano de nascimento no futuro são recusados.
- **Constantes com nome:** valores como `HORAS_NORMAIS_NO_MES`, `FAIXA_VENDAS` e `IDADE_MINIMA_VOTO` deixam claro de onde cada número vem.
- **Acentos no Windows:** arquivos em UTF-8 e console configurado com `SetConsoleOutputCP`.

## ✅ Testes

São **30 casos** em [`tests/`](tests): o `.in` tem o que é digitado e o `.out` tem a saída esperada. O [`run_tests.sh`](run_tests.sh) compila com `-Wall -Wextra -Wpedantic -Werror` e compara tudo.

```bash
./run_tests.sh               # com GCC
CC=clang ./run_tests.sh      # com Clang
```

## 🚀 Como executar um exercício

```bash
gcc -std=c11 -Wall -o ex09 src/ex09_salario_horas.c
./ex09
```

## 📁 Estrutura

```
src/       → exercícios e o cabeçalho de leitura segura
tests/     → entradas e saídas esperadas de cada caso
run_tests.sh
.github/workflows/ci.yml   → CI com GCC e Clang
```
