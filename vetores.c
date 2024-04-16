#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

/* Conjuntos de elementos de um mesmo tipo, onde cada um pode armazenar uma informação diferente, 
mas todas compartilham o mesmo nome e tipo. São associados índices a esse nome, que representam as 
posições do vetor. O array unidimensional também é conhecido por vetor, enquanto o array 
multidimensional é denominado de matriz. */

#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  

    int numeros[5]; // Declarando vetor
    numeros[0] = 1;
    numeros[1] = 2;
    numeros[2] = 3;
    numeros[3] = 4;
    numeros[4] = 5;

    printf("Elemento 1: %d\n", numeros[0]);
    printf("Elemento 2: %d\n", numeros[1]);
    printf("Elemento 3: %d\n", numeros[2]);
    printf("Elemento 4: %d\n", numeros[3]);
    printf("Elemento 5: %d\n", numeros[4]);
	
	return 0;
	
	}
