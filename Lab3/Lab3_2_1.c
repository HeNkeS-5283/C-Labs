#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");
	int x, a;
	printf("Задати любе цiле число:");
	printf("\nx = ");
	scanf("%d", &x);
	
	if (x > 0 && x % 2 == 0) printf("\nЗадане число парне додатне."); 
	else if (x > 0) printf("\nЗадане число не парне додатне.");
	else if (x < 0 && x % 2 == 0) printf("\nЗадане число парне вiд'ємне.");
	else if (x < 0) printf("\nЗадане число не парне вiд'ємне.");
	else printf("\nЗадане число нуль.");

	return 0;
}