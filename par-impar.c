#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		
    int num = 5; // Par ou ímpar?

    if (num % 2 == 0) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
}
	return 0;
	
	}
