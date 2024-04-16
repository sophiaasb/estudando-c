#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	char nome[50];
	int i, idade;
	float notas[4], soma = 0, media = 0;
	
	printf("Insira o nome do aluno: ");
	scanf("%s", &nome);
	printf("Insira a idade do aluno: ");
	scanf("%i", &idade);
    printf("Digite as quatro notas: \n");
	for (i = 0; i < 4; i++) {
		printf("Digite a %dª nota: ", i+1);
		scanf("%f", &notas[i]);
   	
		soma += notas[i];
	}
	
	media = soma / (float) 4;
	
	system("cls");
	printf("=== Exibindo dados ===\n");
	printf("Nome do aluno: %s", nome);
	printf("\nIdade do aluno: %i\n", idade);
	for (i = 0; i < 4; i++) {
		printf("%dª nota: %.1f \n", i+1, notas[i]);
	}
	printf("Média: %.1f \n", media);

	return 0;
}
