#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Declarar variáveis.
	int numInteiro = 15;      // Inteiro
    float numReal = 5.99;     // Real
    char letra = 'D';         // Character
    char cadeia[200] = "String";   // Cadeia

    // Exibir variáveis.
    printf("%d \n", numInteiro);
    printf("%.2f \n", numReal);
    printf("%c \n", letra);
    printf("%s \n", cadeia);
	
	return 0;
}
