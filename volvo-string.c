#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  

    char carName[] = "Volvo";
    int i;

    for (i = 0; i < 5; ++i) {
        printf("%c \n", carName[i]);
}

	return 0;
	
	}
