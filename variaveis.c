#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int num1 = 15;
	float num2 = 22.5;
	char caractere = 48;
	
	printf("%d\n", num1);
	printf("%.1f\n", num2);
	printf("%c\n", caractere);
	
	return 0;
}
