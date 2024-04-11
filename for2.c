#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int i;
	
	for(i = 9; i > 0; i--) {
		printf("Linha %d \n", i);
	}
    
	return 0;
}
