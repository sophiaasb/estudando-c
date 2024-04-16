#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
		
    // Declarar variáveis inteiras.
    int base = 4;
    int altura = 6;
    int area;

    // Calcule a área do retângulo.
    area = base * altura;

    // Exibir valores.
    printf("A altura do retângulo é: %d cm \n", altura);
    printf("A base do retângulo é: %d cm \n", base);
    printf("A área do retângulo é: %d m²", area);
     
	return 0;
	
	}
