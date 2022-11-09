#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ukr");

	int s = 0;
	for (int i = 10; i <= 30; i++) {
		for (int j = i; j <= 30; j++) {
			s += 1 + j + i;
		}
	}

	printf("\nСума = %d\n ", s);

	return 0;
}