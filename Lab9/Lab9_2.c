#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#pragma warning(disable : 4996)

int setn() {
	int n;
	printf("Введiть кiлькiсть рядкiв масиву: ");
	printf("\nn = ");
	scanf("%d", &n);
	return n;
}

void arr_rand(int* n, int* a) {
	const int Low = -100, High = 100;
	srand(time(0));

	printf("Згенерований масив:\n");
	printf("а = {");
	for (int i = 0; i < *n; i++) {
		a[i] = Low + rand() % (High - Low + 1);;
		printf(" %d, ", a[i]);
	}
	printf("}\n");
}

void negative(int* n, int* a) {
	int s = 0;
	for (int i = 0; i < *n; i++) {
		if (a[i] < 0) s++;
	}
	printf("\nКiлькiсть вiд’ємних елементiв масиву: %d\n\n", s);
}

void minimal(int* n, int* a) {
	int min = 0, imin = 0, s = 0;
	for (int i = 0; i < *n; i++) {
		if (i == 0) {
			min = a[i];
			imin = i;
		}
		if (min > a[i]) {
			min = a[i];
			imin = i;
		}
	}
	for (int i = imin; i < *n; i++) {
		s += a[i];
	}
	printf("Мiнiмальний елемент масиву: %d\n\n", min);
	printf("Сума елементiв масиву, розташованих пiсля мiнiмального елемента: %d\n\n", s);
}

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n = setn();
	int* na = &n;
	int a['n'];
	int* pa = a;
	pa = (int*)malloc(n * sizeof(int));
	arr_rand(na, pa);
	negative(na, pa);
	minimal(na, pa);

	free(pa);
	return 0;
}