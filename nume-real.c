#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	

float numReal = 3.5;

printf("%f \n", numReal);   
printf("%.1f\n", numReal); 
printf("%.2f\n", numReal); 
printf("%.4f", numReal);  

	return 0;
	
	}
