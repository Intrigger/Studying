/*
*
		�����������
*
*/

#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main() {

	setlocale(LC_ALL, "Russian");

	double num1, num2;
	printf("������� 1-� �������: ");
	while (!scanf_s("%lf", &num1)) {
		printf("���..������, �� ����� ���-�� �� ���!\n���������� ��� �����!)\n");
		printf("������� 1-� �������: ");
		scanf_s("%*[^\r\n]");
	}

	printf("������� 2-� �������: ");
	while (!scanf_s("%lf", &num2)) {
		printf("���..������, �� ����� ���-�� �� ���!\n���������� ��� �����!)\n");
		printf("������� 2-� �������: ");
		scanf_s("%*[^\r\n]");
	}

	char c = ' ';


	while ((c != '-') && (c != '+') && (c != '*') && (c != '/')) {
		printf("������� ��������: ");
		while ((!scanf_s("%s", &c))) {
			printf("���.. � ������ ��������� �� ����...\n���������� ��� ���: ");
			scanf_s("%*[^\r\n]");
		}
	}

	switch (c) {
	case '+': printf("%lf + %lf = %lf", num1, num2, num1 + num2); break;
	case '-': printf("%lf - %lf = %lf", num1, num2, num1 - num2); break;
	case '*': printf("%lf * %lf = %lf", num1, num2, num1 * num2); break;
	case '/': {
		if (num2 == 0) {
			printf("Cannot divide by zero! Error!");
			exit(-1);
		}
		printf("%lf / %lf = %lf", num1, num2, num1 / num2); break;
	}
	}
	printf("\n\n");
	system("pause");

	return 0;
}