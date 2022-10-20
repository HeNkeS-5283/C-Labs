#include <stdio.h>
#include <locale.h>
#pragma warning(disable : 4996)

int main() {
	setlocale(LC_CTYPE, "ukr");

	int a;

	printf("Ввести номер студента: ");
	scanf("%d", &a);

		switch(a)
		{
		case 1: printf("\nЯровий Олександр\n"); break;
		case 2: printf("\nДудка Святослав\n"); break;
		case 3: printf("\nМiкiцел Лазор\n"); break;
		case 4: printf("\nДуднiк Вiктор\n"); break;
		case 5: printf("\nТокар Iгор\n"); break;
		case 6: printf("\nКаптелов Кирил\n"); break;
		case 7: printf("\nСемчук Iван\n"); break;
		case 8: printf("\nПетрушко Павло\n"); break;
		default: printf("\nСтудента не зареєстровано.\n");
			break;
		}


	return 0;
}