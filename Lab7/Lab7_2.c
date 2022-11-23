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

	void rar(int n, int* a) { 
		const int Low = -100, High = 100;
		srand(time(0));
		
		printf("Згенерований масив:\n");
		printf("а = {");
		for (int i = 0; i < n; i++) {
			a[i] =  rand() % Low - High;
			printf(" %d, ", a[i]);
		}
		printf("}\n");
	}

	void minimal(int n, int* a) {
		int min = abs(a[0]), imin = 1;
		for (int i = 0; i < n; i++) {
			if (min > abs(a[i])) {
				min = abs(a[i]);
				imin = i+1;
			}
		}
		printf("\nНомер мiнiмального за модулем елемента масиву: %d (%d)\n", imin, min);
	}

	void sum(int n, int* a) {
		int s = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] < 0) {
				for (int j = 1 + i; j < n; j++) {
					s += a[j];
					if (a[j] > 0) break;
				}
				break;
			}
		}
		printf("\nCума елементiв масиву, розташованих мiж першим й останнiм вiдємними елементами: %d\n", s);
	}

int main() {
	setlocale(LC_CTYPE, "ukr");
	
	int n = setn();
	int a['n'];
	int* pa = a;
	pa = (int*)malloc(n * sizeof(int));
	
	rar(n, pa);

	minimal(n, pa);

	sum(n, pa);

	free(pa);
	return 0;
}