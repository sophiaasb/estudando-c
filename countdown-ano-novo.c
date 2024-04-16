#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  
    
    int countdown = 3;

    while (countdown > 0) {
        printf("%d \n", countdown);
    countdown--;
}

    printf("Happy New Year!!\n");

	return 0;
	
	}
