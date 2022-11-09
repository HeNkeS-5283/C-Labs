#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ukr");
	
	int s = 0;
	for(int i = 2; i < 150; i++) {
		if (i % 7 == 0) {
			s += i;
		}
	}
	printf("\nСума = %d\n", s);

	return 0;
}
