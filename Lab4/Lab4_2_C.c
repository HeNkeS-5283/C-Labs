#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ukr");

	int s = 0, i = 2;
	do {
		if (i % 7 == 0) {
			s += i;
		}
		i++;
	} while (i < 150);
	
	printf("\nСума = %d\n", s);

	return 0;
}