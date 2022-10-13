#include<stdio.h>
#include<locale.h>
#include<malloc.h>
int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	str = (char*)malloc(sizeof(char) * 100);
	printf("¬ведите строку: ");
	gets(str);
	puts(str);
	free(str);
	system("pause");
	return 0;
}