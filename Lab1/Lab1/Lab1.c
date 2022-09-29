#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");
	int n, h, m, s;
	printf("Введiть скiльки секунд пройшло з початку доби n=");
	scanf("%d", &n);
	h = n / 3600;
	n = n % 3600;
	m = n / 60;
	n = n % 60;
	s = n;
	printf("\nЗ початку доби пройшло %d годин %d хвилин %d секунд\n", h, m, s);
}
