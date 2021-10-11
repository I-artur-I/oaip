#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 3;
	const int stolbch = 2;
	double massiv[stroki][stolbch];
	std::cout << "Введите вещественные числа\n";
	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << "Массив[" << i << "][" << j << "]=";
			std::cin >> massiv[i][j];
		}
	}
	std::cout << "Ваш массив\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << " ; ";
		}
		std::cout << "\n";
	}

	system("pause");
	return 0;
}