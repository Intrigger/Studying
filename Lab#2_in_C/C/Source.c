/*
*
		�����������
		������ 2.0
*
*/

#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <Windows.h>
int main() {

	setlocale(LC_ALL, "Russian");

	char(*menu[7])[20];
	char tmp[50];
	menu[0] = "�������� ��������\t\t";		CharToOemA(menu[0], tmp);
	menu[1] = "�������� ���������\t\t";		CharToOemA(menu[1], tmp);
	menu[2] = "�������� ���������\t\t";		CharToOemA(menu[2], tmp);
	menu[3] = "�������� �������\t\t";		CharToOemA(menu[3], tmp);
	menu[4] = "���� ������� �����\t\t";		CharToOemA(menu[4], tmp);
	menu[5] = "���� ������� �����\t\t";		CharToOemA(menu[5], tmp);
	menu[6] = "�����\t\t\t\t";					CharToOemA(menu[6], tmp);

	int current = 0;

	double num1, num2;

	boolean firstOperandIn = 0;
	boolean secOperandIn = 0;
	char check = ' ';
	do {

		system("cls");
		for (int i = 0; i < 7; i++) {
			printf("%d)%s", i + 1, menu[i]);
			if (i == current) printf(" <--- \n");
			else printf("\n");
		}
		check = _getch();
		switch (check) {
		case 13: {
			switch (current) {
			case 4: {
				if (!firstOperandIn) printf("������� 1-� �������: ");
				else printf("����, �������� 1-� ������� �����: ");
				while (!scanf_s("%lf", &num1)) {
					printf("���..������, �� ����� ���-�� �� ���!\n���������� ��� �����!)\n");
					printf("������� 1-� �������: ");
					scanf_s("%*[^\r\n]");
				}
				printf("�� ������� ����� 1-� �������!\n");
				Sleep(500);
				firstOperandIn = 1;
				break;
			}
			case 5: {
				if (!firstOperandIn) {
					printf("������� ������� 1-� �������!");
					Sleep(1000);
					break;
				}
				else {
					if (secOperandIn) printf("����, ������� 2-� ������� �����: ");
					else printf("������� 2-� �������: ");
				}
				while (!scanf_s("%lf", &num2)) {
					printf("���..������, �� ����� ���-�� �� ���!\n���������� ��� �����!)\n");
					printf("������� 2-� �������: ");
					scanf_s("%*[^\r\n]");
				}
				secOperandIn = 1;
				printf("�� ������� ����� 2-� �������!\n");
				Sleep(500);
				break;
			}
			case 0: {
				if (firstOperandIn && secOperandIn) {
					printf("%lf + %lf = %lf", num1, num2, num1 + num2);
					Sleep(5000);
					num1 = 0.0;
					num2 = 0.0;
					firstOperandIn = 0;
					secOperandIn = 0;
					break;
				}
				else {
					if ((firstOperandIn == 0) && (secOperandIn == 0)) {
						printf("�� �� ����� �� ������ ��������!");
					}
					if ((firstOperandIn == 0) && (secOperandIn == 1)) {
						printf("�� ������ ������ 1-� �������!");
					}
					if ((firstOperandIn == 1) && (secOperandIn == 0)) {
						printf("�� ������ ������ 2-� �������!");
					}
					Sleep(1000);
					break;
				}
			}
			case 1: {
				if (firstOperandIn && secOperandIn) {
					printf("%lf - %lf = %lf", num1, num2, num1 - num2);
					Sleep(5000);
					num1 = 0.0;
					num2 = 0.0;
					firstOperandIn = 0;
					secOperandIn = 0;
					break;
				}
				else {
					if ((firstOperandIn == 0) && (secOperandIn == 0)) {
						printf("�� �� ����� �� ������ ��������!");
					}
					if ((firstOperandIn == 0) && (secOperandIn == 1)) {
						printf("�� ������ ������ 1-� �������!");
					}
					if ((firstOperandIn == 1) && (secOperandIn == 0)) {
						printf("�� ������ ������ 2-� �������!");
					}
					Sleep(1000);
					break;
				}
			}
			case 2: {
				if (firstOperandIn && secOperandIn) {
					printf("%lf * %lf = %lf", num1, num2, num1 * num2);
					Sleep(5000);
					num1 = 0.0;
					num2 = 0.0;
					firstOperandIn = 0;
					secOperandIn = 0;
					break;
				}
				else {
					if ((firstOperandIn == 0) && (secOperandIn == 0)) {
						printf("�� �� ����� �� ������ ��������!");
					}
					if ((firstOperandIn == 0) && (secOperandIn == 1)) {
						printf("�� ������ ������ 1-� �������!");
					}
					if ((firstOperandIn == 1) && (secOperandIn == 0)) {
						printf("�� ������ ������ 2-� �������!");
					}
					Sleep(1000);
					break;
				}
			}
			case 3: {
				if (firstOperandIn && secOperandIn) {
					if (num2 == 0.0) {
						printf("�� �� ����� �����!!! ������ �� ���� ������!");
						Sleep(1000);
						break;
					}
					printf("%lf / %lf = %lf", num1, num2, num1 / num2);
					Sleep(5000);
					num1 = 0.0;
					num2 = 0.0;
					firstOperandIn = 0;
					secOperandIn = 0;
					break;
				}
				else {
					if ((firstOperandIn == 0) && (secOperandIn == 0)) {
						printf("�� �� ����� �� ������ ��������!");
					}
					if ((firstOperandIn == 0) && (secOperandIn == 1)) {
						printf("�� ������ ������ 1-� �������!");
					}
					if ((firstOperandIn == 1) && (secOperandIn == 0)) {
						printf("�� ������ ������ 2-� �������!");
					}
					Sleep(1000);
					break;
				}
				break;
			}
			case 6: {
				printf("\n\n\n������� �� ������������ ����� ������������!\n�� ��������!\a");
				return -1;
			}
			}	break;
		case 80: current = (current + 1) % 7; break;

		case 72: current -= 1; break;
		}
		}
		if (current < 0) current = 6;
	} while (1);

	return 0;
}