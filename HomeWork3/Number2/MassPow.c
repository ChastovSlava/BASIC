#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int e, result = 0, mass[100000];
	printf("¬ведите кол-во эл-ов (до 100000): \n");
	scanf_s("%d", &e);
	printf("¬ведите эл-ты массива: \n");
	for (int i = 0; i < e; i++) {
		scanf_s("%d", &mass[i]);
	}
	for (int i = 0; i < e; i++) {
		result = result + pow(mass[i], 2);
	}
	printf("—умма квадратов эл-та равна: %d.\n", result);
	system("pause");
	return 0;
}