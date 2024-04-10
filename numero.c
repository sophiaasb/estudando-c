#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d", &numero);
	getchar();
	
	system("cls || clear");
	printf("O número é igual a: %d", numero);
	
	return 0;
}
