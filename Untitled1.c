#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	printf("Ol� mundo! \n");
	return 0;
}
