#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int a, b;
	float c;
	printf("Задати два цiлих числа для обчислень:");
	printf("\na = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	
	c = ((2 * (float)a - (float)b) * (2 * (float)b + (float)a)) / (sqrt((float)a - 2 * (float)b) + 2 * (float)b);
	
	printf("\nРезультат обчислень: %.2f\n", c);
	return 0;
}