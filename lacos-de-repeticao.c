#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

/* São comandos que permitem iteração de código, ou seja, que comandos presentes no bloco sejam repetidos diversas vezes. 
Através de laços de repetição é possível criar programas que podem criar trechos de código que sejam repetidos até que certa 
condição estabelecida. */

while (condicao) { // Use quando não souber quantas vezes o bloco será executado. 
  // bloco de código a ser executado
}

/* Funcionará enquanto uma condição especificada for verdadeira. */

do {
  //  bloco de código a ser executado
}
while (condicao);

/* O loop do/while é uma variante do loop while. 
Este loop executará o bloco de código uma vez, antes de verificar se a condição é verdadeira, 
e então repetirá o loop enquanto a condição for verdadeira.
O loop sempre será executado pelo menos uma vez, mesmo que a condição seja falsa, porque o 
bloco de código é executado antes da condição ser testada. */


for (expressao1; expressao2; expressao3) { // Use quando souber exatamente quantas vezes deseja percorrer um bloco de código.
  // bloco de código a ser executado
}

/* A expressão 1 é executada (uma vez) antes da execução do bloco de código.
A expressão 2 define a condição para execução do bloco de código.
A expressão 3 é executada (sempre) após a execução do bloco de código. */
