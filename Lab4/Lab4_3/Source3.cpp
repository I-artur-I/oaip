#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int i;

	std::cout << "������� ����� I \n";
	std::cin >> i;
	if (i < 0 && i % 7 ==0) {
		std::cout << "����� ���������� � ������ A \n";
	}
	else {
		if (i > 0 && i < 100) {
			std::cout << "����� ���������� � ������ B \n";
		}
		else {
			if (i == 0 || i > 100) {
				std::cout << "����� ���������� � ������ C \n";
			}
			else {
				std::cout << "����� ���������� � ������ D \n";
			}
		}
	}

	system("pause");
	return 0;
}