#include<stdio.h>
#include<locale.h>
#include<malloc.h>
int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	int x = 0, number, cut;
	str = (char*)malloc(sizeof(char) * 100);
	printf("Введите строку: ");
	gets(str);
	while (x != 1) {
		printf("Выберете действия над строкой:\n1) заменить строку\n2) обрезать строку\n3) развернуть строку\n4) сменить регистр\n0) выход\n\nВаш выбор: ");
		scanf_s("%d", &number);
		system("cls");
		switch (number) {
		case 1:
			continue;
		case 2:
			printf("Введите значение: ");
			scanf_s("%d", &cut);
			str[cut] = '\0';
			printf("Результат: %s\n", str);
			continue;
		}
		x++;
	}
	free(str);
	system("pause");
	return 0;
}