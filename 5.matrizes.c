#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

/* Matrizes são estruturas de dados que permitem armazenar uma coleção de elementos do mesmo tipo em células de memória consecutivas sob um único nome. 
As matrizes são usadas para representar tabelas ou grades de valores, e cada elemento da matriz pode ser acessado por um índice que começa em 0. */

#include <stdio.h>

int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    // Mostra os elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
    return 0;
}

