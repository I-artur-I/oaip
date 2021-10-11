#include <iostream>
#include <Windows.h>
#include <cmath>
#include <random>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int l = 1271;
	int massiv[l];
	for (int i = 0; i < l; i++) {
		massiv[i] = -6 + rand() % 19;
	}
	std::cout << "Ваш массив\n";
	for (int i = 0; i < l; i++) {
		std::cout << "[" << i << "]=" << massiv[i] << "\n";
	}
	std::cout << "Все числа подходящие под условие\n";
	for (int i = 0; i < l; i++) {
		if (i % 5 == 0 && i >249) {
			std::cout << "[" << i << "]=" << massiv[i] << "\n";
		}
	}
	std::cout << "\n";
	system("pause");
	return 0;
}