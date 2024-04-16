#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		
    int num = 10; // Positivo ou negativo?

    if (num > 0) {
        printf("O número é positivo.");
   } else if (num < 0) {
        printf("O número é negativo.");
   } else {
        printf("O valor é 0");
}
	return 0;
	
	}
