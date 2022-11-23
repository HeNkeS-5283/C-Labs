#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
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

	int A['n']['m'];
	printf("\nВведiть цiлi числа для масиву:");
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			printf("\nA[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	system("cls");
	printf("Заданий масив %dx%d\n", n, m);
	printf("A = ");
	for (int i = 0; i < n; i++) {
		printf("\t{");
		for (int j = 0; j < m; j++) {
			printf("\t%d,", A[i][j]);
		}
		printf("\t}\n");
	}
	int b['m'];

	for (int j = 0; j < m; j++) {
		int min = 0;
		for (int i = 0; i < n; i++) {
			if (i == 0) min = A[i][j];
			if (min > A[i][j])
				min = A[i][j];
		}
		b[j] = min;
	}

	printf("\nВектор b елементи якого є мiнiмальними елементами кожного зi стовпцiв.");
	printf("\nb = {");
	for (int j = 0; j < m; j++) printf(" %d, ", b[j]);
	printf("}\n");
}