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

int setm() {
	int m;
	printf("Введiть кiлькiсть стовпчикiв масиву: ");
	printf("\nm = ");
	scanf("%d", &m);
	return m;
}
void arr_rand(int n, int m, int *a) {
	const int Low = -100, High = 100;
	srand(time(0));

	printf("\nЗгенерований масив %dx%d\n", n, m);
	printf("a = ");
	for (int i = 0; i < n; i++) {
		printf("\t{");
		for (int j = 0; j < m; j++) {
			*(a + i * m + j) = rand() % Low - High;
			printf("\t%d,", *(a + i * m + j));
		}
		printf("\t}\n");
	}
}

void minimal(int n, int m, int* a) {
	int b['n'];

	for (int i = 0; i < n; i++) {
		int min = 0;
		 for (int j = 0; j < m; j++) {
			if (j == 0) min = *(a + i * m + j);
			if (min > *(a + i * m + j))
				min = *(a + i * m + j);
		}
		b[i] = min;
	}
	
	printf("\nВектор b елементи якого є мiнiмальними елементами кожного зi рядкiв.");
	printf("\nb = ");
	for (int i = 0; i < n; i++) {
	printf("\t{");
	printf(" %d ", b[i]);
	printf("}\n");
	} 
}

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n = setn();
	int m = setm();
	int a['n']['m'];
	int* pa = a;
	pa = (int*)malloc(n * sizeof(int) + m);
	arr_rand(n, m, pa);

	minimal(n, m, pa);

	return 0;
}