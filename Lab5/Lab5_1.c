#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int n;
	printf("Введiть кiлькiсть елементiв в масивi: ");
	printf("\nn = ");
	scanf("%d", &n);

	float a['n'];
	printf("\nВвести дiйснi числа для масиву:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}

	float b['n'];
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
	printf("\nМасив упорядкований по зростанню:");
	for (int i = 0; i < n; i++)
	{
		float min = b[i];
		int	imin = i;
		for (int j = i + 1; j < n; j++)
			if (min > b[j])
			{
				min = b[j];
				imin = j;
			}
		b[imin] = b[i];
		b[i] = min;
	}
	for (int i = 0; i < n; i++)
		printf("\nb[%d] = %.2f", i, b[i]);
}