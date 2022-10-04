#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<windows.h>
int main() {
	setlocale(LC_ALL, "rus");
	int a = 0, number, stop1 = 0, stop2 = 0;
	float side1, side2, result, rad;
	printf("Добро пожаловать!");
	Sleep(500);
	system("cls");
	while (a < 2) {
		printf("Загрузка.");
		Sleep(500);
		system("cls");
		printf("Загрузка..");
		Sleep(500);
		system("cls");
		printf("Загрузка...");
		Sleep(500);
		system("cls");
		a++;
	}
	while (stop1 != 1) {
		printf("Выбор фигуры:\n");
		printf("1. Прямоугольник.\n");
		printf("2. Треугольник.\n");
		printf("3. Круг.\n");
		printf("0. Выйти из приложения.\n");
		printf("Ввод: ");
		scanf_s("%d", &number);
		system("cls");
		if (number == 1) {
			printf("Введите 2 стороны прямоугольника: ");
			scanf_s("%f %f", &side1, &side2);
			system("cls");
			stop2 = 0;
			while (stop2 != 1) {
				printf("Меню:\n");
				printf("1. Найти площадь прямоугольника.\n");
				printf("2. Найти периметр прямоугольника.\n");
				printf("3. Найти диагональ прямоугольника.\n");
				printf("4. Вернуться к выбору фигуры.\n");
				printf("0. Выйти.\n");
				printf("Ввод: ");
				scanf_s("%d", &number);
				if (number == 4) {
					stop2++;
					system("cls");
				}
				else {
					if (number == 1) {
						result = side1 * side2;
						printf("%.2f\n", result);
						system("pause");
						system("cls");
					}
					else {
						if (number == 2) {
							result = side1 + side2 + side1 + side2;
							printf("%.2f\n", result);
							system("pause");
							system("cls");
						}
						else {
							if (number == 3) {
								result = sqrt(side1 * side1 + side2 * side2);
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								system("cls");
								stop2++;
								stop1++;
							}
						}
					}
				}
			}
		}
		else {
			if (number == 2) {
				printf("Введите две стороны прямоугольного треугольника: ");
				scanf_s("%f %f", &side1, &side2);
				system("cls");
				stop2 = 0;
				while (stop2 != 1) {
					printf("Меню:\n");
					printf("1. Найти площадь треугольника.\n");
					printf("2. Найти периметр треугольника.\n");
					printf("3. Найти гипотенузу треугольника.\n");
					printf("4. Вернуться к выбору фигуры.\n");
					printf("0. Выйти.\n");
					printf("Ввод: ");
					scanf_s("%d", &number);
					if (number == 4) {
						stop2++;
						system("cls");
					}
					else {
						if (number == 1) {
							result = side1 * side2 * 0.5;
							printf("%.2f\n", result);
							system("pause");
							system("cls");
						}
						else {
							if (number == 2) {
								result = side1 + side2 + sqrt(side1 * side1 + side2 * side2);
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								if (number == 3) {
									result = sqrt(side1 * side1 + side2 * side2);
									printf("%.2f\n", result);
									system("pause");
									system("cls");
								}
								else {
									system("cls");
									stop2++;
									stop1++;
								}
							}
						}
					}
				}
			}
			else {
				if (number == 3) {			
					printf("Введите радиус круга: ");
					scanf_s("%f", &rad);
					system("cls");
					stop2 = 0;
					while (stop2 != 1) {
						printf("Меню:\n");
						printf("1. Найти площадь круга.\n");
						printf("2. Найти длину окружности круга.\n");
						printf("3. Найти диаметр круга.\n");
						printf("4. Вернуться к выбору фигуры.\n");
						printf("0. Выйти.\n");
						printf("Ввод: ");
						scanf_s("%d", &number);
						if (number == 4) {
							stop2++;
							system("cls");
						}
						else {
							if (number == 1) {
								result = 3.14 * rad * rad;
								printf("%.2f\n", result);
								system("pause");
								system("cls");
							}
							else {
								if (number == 2) {
									result = 2 * 3.14 * rad;
									printf("%.2f\n", result);
									system("pause");
									system("cls");
								}
								else {
									if (number == 3) {
										result = 2 * rad;
										printf("%.2f\n", result);
										system("pause");
										system("cls");
									}
									else {
										system("cls");
										stop2++;
										stop1++;
									}
								}
							}
						}
					}
				}
				else {
					if (number == 0) {
						break;
					}
					else {
						system("cls");
						printf("Введено неверное значение!\n");
						system("pause");
						system("cls");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}