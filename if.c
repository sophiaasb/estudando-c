#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

     if (condicao) {
     // bloco de código a ser executado se a condição for verdadeira
    }
    
    if (condicao) {
    // bloco de código a ser executado se a condição for verdadeira
   } else {
    // bloco de código a ser executado se a condição for falsa
   }
   
   if (condicao1) {
    // bloco de código a ser executado se a condição1 for verdadeira
   } else if (condicao2) {
    // bloco de código a ser executado se a condição1 for falsa e a condicao2 for verdadeira
   } else {
    // bloco de código a ser executado se ambas as condicoes forem falsas
   }

	return 0;
	
	}
