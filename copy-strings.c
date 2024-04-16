#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  

    char str1[20] = "Hello World!";
    char str2[20];

    // Copy str1 to str2
    strcpy(str2, str1);

    // Print str2
    printf("%s", str2);

	return 0;
	
	}
