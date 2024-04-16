#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

    int num1 = 5;
    int num2 = 2;
    float soma = (float) num1 / num2;

    printf("%.1f", soma); // 2.5

	return 0;
	
	}
