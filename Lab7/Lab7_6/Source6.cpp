#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 21;
	const int stolbch = 10;
	int massiv[stroki][stolbch];
	int s = 1;
	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			massiv[i][j] = s;
				s += 2;
		}
	}
	std::cout << "Ваш массив\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << "\t";
		}
		std::cout << "\n";
	}

	std::cout << "Ваш уменьшенный массив \n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] - 1 << "\t";
		}
		std::cout << "\n";
	}

	system("pause");
	return 0;
}