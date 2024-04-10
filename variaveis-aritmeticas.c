#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	printf("%d\n", 5+2);
	printf("%d\n", 9-4);
	printf("%d\n", 2*3);
	printf("%d\n", 10/5);
}
