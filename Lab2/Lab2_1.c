#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");
	int a, b, res1, res2, res3;
	printf("Задати два цiлих числа для обчислень:");
	printf("\na = ");
	scanf("%d", &a);
	printf("\nb = ");
	scanf("%d", &b);
	res1 = a + b;
	res2 = b % a;
	res3 = a / b;
	printf("\nДодавання двох чисел: %d", res1);
	printf("\nЗалишок вiд дiлення 2-го числа на 1-е: %d", res2);
	printf("\nЦiла частина вiд дiлення 1-го числа на 2-е: %d\n", res3);


	return 0;
}