#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");

/* Em vez de escrever muitas instruções if... else, use a instrução switch.
A instrução switch seleciona um dos muitos blocos de código a serem executados. */

switch (condicao) { // A expressão switch é avaliada uma vez
  case 1: // O valor da expressão é comparado com os valores de cada caso
    // bloco de código, se houver uma correspondência, o bloco de código associado será executado
    break; // A instrução break sai do bloco switch e interrompe a execução.
  case 2:
    // bloco de código
    break;
  default:
    // bloco de código // A instrução default é opcional e especifica algum código a ser executado se não houver correspondência de maiúsculas e minúsculas.
}
