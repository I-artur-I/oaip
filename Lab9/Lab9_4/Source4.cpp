#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int l, w;
	std::cout << "Введи значения для размеры массива\n";
	do {
		std::cin >> l;
		std::cin >> w;
	} while (l < 0 || w < 0);
	int** m = new int* [l];
	if (m == NULL) {
		std::cout << "Не удалось создать места в памяти под массив";
		return 1;
	}
	for (int i = 0; i < l; i++) {
		m[i] = new int[w];
		if (m[i] == NULL) {
			std::cout << "Не удалось создать места в памяти под массив";
			return 1;
		}
	}

	std::cout << "Ваш массив\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			m[i][j] = -200 + (i * w + j);
			std::cout << m[i][j] << " ; ";
		}
		std::cout << "\n";
	}

	std::cout << "Ваш измененный массив массив\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			m[i][j] += 300;
			std::cout << m[i][j] << " ; ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < l; i++) {
		delete[] m[i];
	}
	delete[] m;
	m = NULL;
	system("pause");
	return 0;
}