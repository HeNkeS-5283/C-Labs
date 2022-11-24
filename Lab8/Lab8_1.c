#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int setn() {
	int n;
	printf("Введiть кiлькiсть рядкiв масиву який буде згенеровано: ");
	printf("\nn = ");
	scanf("%d", &n);
	return n;
}

void set_arr(int n, int* a) {
	printf("\nВвести дiйснi числа для масиву:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("\nЗаданий масив:\n");
	printf("а = {");
	for (int i = 0; i < n; i++)
	{
		printf(" %d, ", a[i]);
	}
	printf("}");
}

void act(int* p, int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (p[i] % 2 != 0) s++;
	}
	printf("\nКiлькiсть непарних елементiв масиву: %d", s);
}

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n = setn();
	int a['n'];
	int* pa = a;
	pa = (int*)malloc(n * sizeof(int));
	set_arr(n, pa);
	act(pa, n);

	free(pa);
	return 0;

}