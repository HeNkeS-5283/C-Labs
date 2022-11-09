#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ukr");

	int s = 0, i = 2;
	while (i < 150) {
		if (i % 7 == 0) {
			s += i;
		}
		i++;
	}

	printf("\nСума = %d\n", s);

	return 0;
}