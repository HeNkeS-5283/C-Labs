#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int setn() {
	int n;
	printf("Введiть кiлькiсть рядкiв масиву: ");
	printf("\nn = ");
	scanf("%d", &n);
	return n;
}

void arr_set(int* n, int* a) {
	
	printf("\nВведiть цiлi числа для масиву:");
	for (int i = 0; i < *n; i++)
		for (int j = 0; j < *n; j++) {
			printf("\nA[%d][%d] = ", i, j);
			scanf("%d", &*(a + i * *n + j));
		}
	system("cls");
	
	printf("Заданий масив %dx%d\n", *n, *n);
	printf("A = ");
	for (int i = 0; i < *n; i++) {
		printf("\t{");
		for (int j = 0; j < *n; j++) {
			printf("\t%d,", *(a + i * *n + j));
		}
		printf("\t}\n");
	}
	
	printf("Заданий масив %dx%d з помiняними написаннями рядкiв (з лiва на право, з права на лiво):\n", *n, *n);
	printf("A = ");
	for (int i = 0; i < *n; i++) {
		printf("\t{");
		if (i % 2 == 0) 
			for (int j = 0; j < *n; j++) {
			printf("\t%d,", *(a + i * *n + j));
		}
		else
			for (int j = *n - 1; j > -1; j--) {
				printf("\t%d,", *(a + i * *n + j));
			}
		printf("\t}\n");
	}
}

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n = setn();
	int* na = &n;
	int A['n']['n'];
	int* pa = A;
	pa = (int*)malloc(n * sizeof(int) * n);
	arr_set(na, pa);
	
	
	return 0;
}