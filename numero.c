#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d", &numero);
	getchar();
	
	system("cls || clear");
	printf("O n�mero � igual a: %d", numero);
	
	return 0;
}
