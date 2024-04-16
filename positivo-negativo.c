#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		
    int myNum = 10; // Positivo ou negativo?

    if (myNum > 0) {
        printf("O número é positivo.");
   } else if (myNum < 0) {
        printf("O número é negativo.");
   } else {
        printf("O valor é 0");
}
	return 0;
	
	}
