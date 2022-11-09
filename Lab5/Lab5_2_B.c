#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n, x = 0, y = 0;
	printf("Введiть кiлькiсть елементiв в масивi: ");
	printf("\nn = ");
	scanf("%d", &n);

	const int Low = -101, High = 101;
	srand(time(0));

	int a['n'];
	printf("Згенерованi елементи масиву:\n");
	for (int i = 0; i < n; i++) {
		a[i] = Low + rand() % High;
		printf("\na[%d] = %d\n", i, a[i]);
	}

	for (int i = 1; i < n; i++)
	{
		x += a[i];

	}
	printf("\nДобуток не нульових елементiв масиву: %d\n", x);

	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) {
			for (int j = 1 + i; j < n; j++) {
				y += abs(a[j]);
			}
			break;
		}

	}
	printf("\nСума модулiв елементiв масиву, розташованих пiсля першого вiд’ємного елемента: %d\n", y);

}