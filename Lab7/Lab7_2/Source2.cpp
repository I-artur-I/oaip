#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 5;
	const int stolbch = 10;
	int massiv[stroki][stolbch];
	std::cout << "Введите числа для матрицы\n";
	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cin >> massiv[i][j];
		}
	}
	std::cout << "Ваша матрица\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j]<<"\t";
		}
		std::cout << "\n";
	}

	int min = 99999999999999;//////////////////////
	for (int i = 0; i < stroki; i++) {
		int sum = 0;
		for (int j = 0; j < stolbch; j++) {
			sum += massiv[i][j];
		}
		min = min(min, sum);//////////////////////
	}

	std::cout << "Минимум среди всех сумм строк равен" << min <<"\n";
	system("pause");
	return 0;
}