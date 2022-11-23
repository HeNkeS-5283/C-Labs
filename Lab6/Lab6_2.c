#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n, m, x = 0, y = 0;
	printf("Введiть кiлькiсть рядкiв масиву: ");
	printf("\nn = ");
	scanf("%d", &n);
	printf("Введiть кiлькiсть стовпчикiв масиву: ");
	printf("\nm = ");
	scanf("%d", &m);
	const float Low = -100.1, High = 100.1;
	srand(time(0));

	float a['n']['m'];
	printf("\nЗгенерований масив %dx%d\n", n, m);
	printf("a = ");
	for (int i = 0; i < n; i++) {
		printf("\t{");
		for (int j = 0; j < m; j++) {
			a[i][j] = Low + High * ((float)rand() / RAND_MAX);
			printf("\t%.2f,", a[i][j]);
		}
		printf("\t}\n");
	}

	float max, min;
	int imax = 0, jmax = 0, imin = 0, jmin = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (i == 0) {
				min = a[i][j];
				max = a[i][j];
			}
			if (a[i][j] > max) {
				max = a[i][j];
				imax = i;
				jmax = j;
			}
			if (min > a[i][j]) {
				min = a[i][j];
				imin = i;
				jmin = j;
			}
		}
	a[imin][jmin] = max;
	a[imax][jmax] = min;
	printf("\nМаксимальне число масива: %.2f\n", max);
	printf("\nМiнiмальне число масива: %.2f\n", min);

	printf("\nМасив з помiняними мiсцями її мiнiмального та максимального елемента:\n", n, m);
	printf("a = ");
	for (int i = 0; i < n; i++) {
		printf("\t{");
		for (int j = 0; j < m; j++) {
			printf("\t%.2f,", a[i][j]);
		}
		printf("\t}\n");
	}


	return 0;
}