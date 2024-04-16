#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		
    int time = 22;

    if (time < 10) {
        printf("Bom dia.");
    } else if (time < 20) {
        printf("Boa tarde.");
    } else {
        printf("Boa noite.");
}
	return 0;
	
	}
