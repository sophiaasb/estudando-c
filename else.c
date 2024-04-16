#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		
    int time = 20;
    if (time < 18) {
        printf("Bom dia.");
    } else {
        printf("Boa noite.");
}

	return 0;
	
	}
