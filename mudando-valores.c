#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Declarar variáveis.
    int num1 = 15;
    int num2 = 23;

   // Atribuindo o valor de num2 (23) para num1
    num1 = num2;

   // num1 agora vale 23, ao invés de 15
   printf("%d", num1);
     
	return 0;
	
	}
