#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");			  

    int i = 0;

    do {
      printf("%d\n", i);
      i++;
}
    while (i < 5);
    
	return 0;
	
	}
