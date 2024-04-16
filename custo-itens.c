#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
    
// Declarar variáveis.
int itens = 50;
float custo_por_item = 9.99;
float custo_total = itens * custo_por_item;

// Exibir variáveis.
printf("Número de itens: %d \n", itens);
printf("Custo por item: R$ %.2f \n", custo_por_item);
printf("Custo total = R$ %.2f \n", custo_total);
     
	return 0;
	
	}
