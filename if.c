#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int a;
	int b;
	
	printf("Digite um valor para a: ");
	scanf("%d", &a);
	getchar();
	printf("Digite um valor para b: ");
	scanf("%d", &b);
	getchar();
	
	if(a < b) {
		printf("\na é menor que b \n");
	} else if (b < a) {
		printf("\nb é menor que a \n");
	} else {
		printf("\na é igual a b \n");
	}
	
	return 0;
}
