#include<stdio.h>
#include<locale.h>
#include<malloc.h>
int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	int x = 0, number, cut;
	str = (char*)malloc(sizeof(char) * 100);
	printf("������� ������: ");
	gets(str);
	while (x != 1) {
		printf("�������� �������� ��� �������:\n1) �������� ������\n2) �������� ������\n3) ���������� ������\n4) ������� �������\n0) �����\n\n��� �����: ");
		scanf_s("%d", &number);
		system("cls");
		switch (number) {
		case 1:
			continue;
		case 2:
			printf("������� ��������: ");
			scanf_s("%d", &cut);
			str[cut] = '\0';
			printf("���������: %s\n", str);
			continue;
		}
		x++;
	}
	free(str);
	system("pause");
	return 0;
}