/*
*
		Калькулятор
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
	printf("Введите 1-й операнд: ");
	while (!scanf_s("%lf", &num1)) {
		printf("Упс..похоже, вы ввели что-то не так!\nПопробуйте еще разок!)\n");
		printf("Введите 1-й операнд: ");
		scanf_s("%*[^\r\n]");
	}

	printf("Введите 2-й операнд: ");
	while (!scanf_s("%lf", &num2)) {
		printf("Упс..похоже, вы ввели что-то не так!\nПопробуйте еще разок!)\n");
		printf("Введите 2-й операнд: ");
		scanf_s("%*[^\r\n]");
	}

	char c = ' ';


	while ((c != '-') && (c != '+') && (c != '*') && (c != '/')) {
		printf("Введите оператор: ");
		while ((!scanf_s("%s", &c))) {
			printf("Упс.. я такого оператора не знаю...\nПопробуйте еще раз: ");
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