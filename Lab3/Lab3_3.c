#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int x, y, z;
	double b;
	printf("Задати значення цiлих змiнних для обчислень:");
	printf("\nx = ");
	scanf("%d", &x);
	printf("\ny = ");
	scanf("%d", &y);
	printf("\nz = ");
	scanf("%d", &z);

	if (((pow(x, 4) / 2) - pow(sin(z), 2)) == 0) printf("\nНеможливо вирiшити, дiлення на нуль!");
	else { 
		b = (1 + cos(y - 2)) / ((pow(x, 4) / 2) - pow(sin(z), 2));
		printf("\nРезультат обчислень: %f", b);
	}

	return 0;
}