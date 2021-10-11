#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int i;

	std::cout << "Введите число I \n";
	std::cin >> i;
	if (i < 0 && i % 7 ==0) {
		std::cout << "Число относиться к группе A \n";
	}
	else {
		if (i > 0 && i < 100) {
			std::cout << "Число относиться к группе B \n";
		}
		else {
			if (i == 0 || i > 100) {
				std::cout << "Число относиться к группе C \n";
			}
			else {
				std::cout << "Число относиться к группе D \n";
			}
		}
	}

	system("pause");
	return 0;
}