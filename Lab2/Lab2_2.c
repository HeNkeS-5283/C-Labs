#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ukr");

	int a = -5, b = 1, c = 8;
	
	printf("Заданi числа a=%d, b=%d, c=%d\n", a, b, c);
	printf("\nФункцiя яка обчислюється: y = ((a-b)/(2*b+c))+(1/a)\n");
	
	float y = (((float)a-(float)b)/(2*(float)b+(float)c))+(1/(float)a);

	printf("\nРезультат обчислень: %.1f\n", y);

	return 0;
}