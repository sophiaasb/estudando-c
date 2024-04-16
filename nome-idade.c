#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  

    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    system("cls || clear");
    printf("Nome: %s \n", nome);
    printf("Idade: %.2d \n",idade);

	return 0;
	
	}
