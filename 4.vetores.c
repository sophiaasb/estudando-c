#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

/* Conjuntos de elementos de um mesmo tipo, onde cada um pode armazenar uma informação diferente, 
mas todas compartilham o mesmo nome e tipo. São associados índices a esse nome, que representam as 
posições do vetor. O array unidimensional também é conhecido por vetor, enquanto o array 
multidimensional é denominado de matriz. */

// Lendo Valores do Usuário para um Vetor: 

int main() {
    int i;
    int tamanho = 5;
    int numeros[tamanho];

    // Lendo valores do usuário
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Exibindo os valores lidos
    printf("Valores lidos:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}

// Encontrando o Maior Elemento em um Vetor

int main() {
    int i;
    int tamanho = 5;
    int numeros[tamanho];
    int maior;

    // Lendo valores do usuário
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);

        // Atualizando o maior valor
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número é: %d\n", maior);
    return 0;
}

// Calculando a Média dos Valores em um Vetor

int main() {
    int i;
    int tamanho = 5;
    int numeros[tamanho];
    int soma = 0;
    float media;

    // Lendo valores do usuário
    for (i = 0; i < tamanho; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float)soma / tamanho;
    printf("A média dos números é: %.2f\n", media);
    return 0;
}
