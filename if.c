#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
	
	int x = 20;
    int y = 18;
    
	if (x > y) {
     printf("x é maior que y");
 }

	return 0;
	
	}
