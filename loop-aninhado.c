#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  
    
   int i;
   
   for (i = 0; i <= 100; i += 10) {
        printf("%d \n", i);
}

   printf("\n");

   for (i = 0; i <= 10; i = i + 2) {
        printf("%d \n", i);
}

	return 0;
	
	}
