#include <iostream>
#include <Windows.h>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 15;
	const int stolbch = 13;
	double massiv[stroki][stolbch];

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			massiv[i][j] = 9 + rand() % 11;
		}
	}
	std::cout << "Ваш массив\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << " | ";
		}
		std::cout << "\n";
	}

	std::cout << "Ваш массив в обратном порядке\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = stolbch -1; j >=0; j--) {
			std::cout << massiv[i][j] << " | ";
		}
		std::cout << "\n";
	}

	system("pause");
	return 0;
}