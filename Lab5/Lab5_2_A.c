#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n, x = 0, y = 0;
	printf("Введiть кiлькiсть елементiв в масивi: ");
	printf("\nn = ");
	scanf("%d", &n);

	int a['n'];
	printf("Ввести дiйснi числа для масиву:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
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