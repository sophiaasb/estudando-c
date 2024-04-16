#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

    int minhaIdade = 25;
    int votoIdade = 18;

    if (minhaIdade >= votoIdade) {
        printf("Pode votar!");
    } else {
        printf("Não pode votar.");
    }

	return 0;
	
	}
