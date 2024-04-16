#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");	
		  
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
    i++;
}
	return 0;
	
	}
