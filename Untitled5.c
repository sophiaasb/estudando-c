#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char a = 1;
	char b = 2;
	char c = 3;
	char d = 1;
	
	if (a > b && a < c)	{
		printf("Condi��o 1 verdadeira \n");
	} if(c == d || d == a) {
		printf("Condi��o 2 verdadeira \n");
	} else {
		printf("Nenhuma condi��o verdadeira \n");
	}
	
	return 0;
}
