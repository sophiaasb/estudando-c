#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int x = 5;
    int y = 6;
    int soma = x + y;
    
	printf("%d", soma);
     
	return 0;
	
	}
