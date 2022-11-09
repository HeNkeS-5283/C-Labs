#include <stdio.h>
#include <locale.h>
#include <math.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int a, y, z;
	float x;
	printf("Задати два цiлих числа для обчислень:");
	printf("\na = ");
	scanf("%d", &a);
	printf("\ny = ");
	scanf("%d", &y);
	
		while (0 >= pow(y, 2) - 2 * a )
	{
		printf("\nДля заданих чисел a та y не можливо вирiшити функцiю, бо число пiд коренем вийде вiд'ємним числом\n");
		printf("Задайте iншi значення:");
		printf("\na = ");
		scanf("%d", &a);
		printf("\ny = ");
		scanf("%d", &y);
	} 
		
	x = (float)a * sqrt(pow(y, 2) - 2 * (float)a);
	printf("\nРезультат обчислень: %2.f\n", x);
	
	return 0;
}