#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int b, c, A;
	float a;
	printf("Задати два цiлих числа для обчислень:");
	printf("\nb = ");
	scanf("%d", &b);
	printf("\nc = ");
	scanf("%d", &c);

	if (c == 5 && b >= 0) {
		a = sqrt(b) + 2 * sqrt(c);
		printf("\nРезультат обчислень 1: %.2f\n", a);
	}
	else if (c == 0) {
		a = (float)b / ((float)c + 6);
		printf("\nРезультат обчислень 2: %.2f\n", a);
	}
	else if (c == -5) {
		A = b + 12 * pow(c, 3);
		printf("\nРезультат обчислень 3: %d\n", A);
	}
	else if (c == 5 && b < 0) printf("\nОбчислення виконати неможливо!\n");
	else printf("\nВведенi невiрнi числа для обчислення!\n"); 
	
	return 0;
}
