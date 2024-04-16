#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	
	// Dados do aluno.
    int alunoID = 10572;
    int alunoIdade = 23;
    float alunoTaxa = 75.25;
    char alunoNota = '8';

    // Exibir dados.
    printf("N° de identificação do aluno: %d \n", alunoID);
    printf("Idade do aluno: %d \n", alunoIdade);
    printf("Taxa de inscrição: R$ %.2f \n", alunoTaxa);
    printf("Nota do aluno: %c", alunoNota);
     
	return 0;
	
	}
