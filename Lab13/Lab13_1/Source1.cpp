#define _CRT_SECURE_NO_WARNINGS
#define _Sdelat_13_laby
#include <iostream>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "������ ����� ASCII � ��������:\n";
	for (unsigned short int a = 0; a < 256; a++) {
		std::cout << a << "\t" << (char)a << std::endl;
	}
	std::cout << "\n��������� ��������� ��������";
	srand(time(NULL));
	char mas[1000];
	for (int i = 0; i < 1000; i++) {
		mas[i] = (char)(rand() % 256);
		std::cout << mas[i] << ' ';
	}
	std::cout << "\n\n��������� ��������� ���������� ��������";
	for (int i = 0; i < 1000; i++) {
		mas[i] = (char)(65 + rand() % (90 - 65 + 1));
		std::cout << mas[i] << ' ';
	}
	std::cout << "\n\n��������� ������ �� ��������� ����\n";
	mas[0] = '\t';
	mas[1] = (char)(65 + rand() % (26));
	for (int i = 2; i < 999; i++) {
		if (rand() % 17 == 0 && i != 2) {
			mas[i] = (char)(65 + rand() % (26));
			mas[i - 1] = ' ';
			mas[i - 2] = '.';
		}
		else {
			if (rand() % 17 == 0 && mas[i - 1] != ' ') {
				mas[i] = ' ';
			}
			else {
				mas[i] = (char)(97 + rand() % (122 - 97 + 1));
			}
		}
	}
	mas[999] = '.';
	for (int i = 0; i < 1000; i++) {
		std::cout << mas[i];
	}
	std::cout << std::endl << std::endl;
	char s[] = "I am going to school now. The sun shining! Is it temperature cold? Future - unknowing...";
	char* p;
	char d[] = ".,!?;:()-";
	p = strtok(s, d);
	while (p != NULL) {
		std::cout << p << std::endl;
		p = strtok(NULL, d);
	}
	std::cout << "\n� ����������� ������ ��������:\n" << s << std::endl;
	char* s0 = new char[100];
	char* s1 = new char[50];
	std::cout << "\n������� �����:\n";
	gets_s(s0,100);
	std::cout << s << std::endl;
	std::cout << "\n������� ������� ���������(�����):\n";
	gets_s(s1,50);
	std::cout << s1 << std::endl;
	if (strstr(s0, s1) != NULL) {
		std::cout << "���� ��������� " << s1 << " � ������: " << s0 << std::endl;
	}
	else {
		std::cout << "��������� " << s1 << " ���  � ������: " << s0 << std::endl;
	}
	system("pause");
	return 0;
}