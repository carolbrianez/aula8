# 🧠 Aula 8

Este repositório contém os exercícios práticos abordados durante a aula sobre estruturas de repetição, operadores lógicos e funções na linguagem C. O objetivo é reforçar a lógica de programação com exemplos simples e didáticos.

---

## 📚 Sumário

1. [Estrutura `do...while`](#1-estrutura-dowhile)  
2. [Comando `break`](#2-comando-break)  
3. [Comando `continue`](#3-comando-continue)  
4. [Valores Verdadeiros e Falsos](#4-valores-verdadeiros-e-falsos)  
5. [Operadores Lógicos](#5-operadores-lógicos)  
6. [Funções em C](#6-funções-em-c)

---

## 1. Estrutura `do...while`

A estrutura `do...while` executa o bloco de código pelo menos uma vez antes de verificar a condição.

### 🧪 Exercício
Crie um jogo de adivinhação em que o jogador deve acertar o número 7.  
- A cada tentativa errada, mostre:  
  `Número errado. Tentativas restantes: N`  
- Se acertar, exiba:  
  `Você ganhou!`  
- Após 3 erros, exiba:  
  `Fim de jogo!`

---

## 2. Comando `break`

O comando `break` é utilizado para sair de laços de repetição ou do comando `switch`.

### 🧪 Exercício
Implemente o jogo **"É par?"**:
- O programa deve aceitar números de 1 a 6 (simulando um dado).
- Continue jogando enquanto os números forem pares.
- Quando um número ímpar for digitado, use `break` para encerrar o jogo.
- Ao final, exiba a soma dos números pares.

---

## 3. Comando `continue`

O `continue` é usado para pular a iteração atual e continuar com a próxima.

### 🧪 Exercício
Mostre os números de 1 a 20, pulando os múltiplos de 3 com `continue`.  

---

## 4. Valores Verdadeiros e Falsos

Em C:
- `0` é considerado **falso**.
- Qualquer outro valor é considerado **verdadeiro**.

---

## 5. Operadores Lógicos

### `&&` (E lógico)
| A | B | Resultado |
|---|---|-----------|
| 0 | 0 |     0     |
| 0 | 1 |     0     |
| 1 | 0 |     0     |
| 1 | 1 |     1     |

### 🧪 Exercício
Implemente a tabela verdade do operador **E lógico** com variáveis `A` e `B`.

---

### `||` (OU lógico)
| A | B | Resultado |
|---|---|-----------|
| 0 | 0 |     0     |
| 0 | 1 |     1     |
| 1 | 0 |     1     |
| 1 | 1 |     1     |

### 🧪 Exercício
Implemente a tabela verdade do operador **OU lógico** com `A` e `B`.

---

### `!` (NEGAÇÃO lógica)
| A | !A |
|---|----|
| 0 | 1  |
| 1 | 0  |

### 🧪 Exercício
Implemente a tabela verdade do operador **NÃO lógico** com uma única variável `A`.

---

## 6. Funções em C

As funções ajudam a dividir o código em partes reutilizáveis e organizadas.

### Exemplos abordados:
- Declaração de função com retorno
- Protótipo de função
- Funções com tipo de retorno `void`

### 🧪 Exercício
Crie uma função `testa_par` que:
- Recebe um número inteiro.
- Retorna `1` se for par e `0` se for ímpar.

