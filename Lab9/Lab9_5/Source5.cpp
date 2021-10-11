#include <iostream>
#include <Windows.h>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int l, w;
	std::cout << "¬веди значени€ дл€ размеры массива\n";
	do {
		std::cin >> l;
		std::cin >> w;
	} while (l < 0 || w < 0);
	double** m = new double* [l];
	if (m == NULL) {
		std::cout << "Ќе удалось создать места в пам€ти под массив";
		return 1;
	}
	for (int i = 0; i < l; i++) {
		m[i] = new double[w];
		if (m[i] == NULL) {
			std::cout << "Ќе удалось создать места в пам€ти под массив";
			return 1;
		}
	}

	std::cout << "¬аш массив\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			m[i][j] = rand() / 1000.0;
			std::cout << m[i][j] << " ";
		}
		std::cout << "\n";
	}

	std::cout << "Ёлементов массива, индекс которых содержит хот€ бы одно число 3:\n";
	for (int i = 0; i < l; i++) {
		int g = i;
		while (g != 0) {
			if (g % 10 == 3) {
				for (int j = 0; j < w; j++) {
					g = j;
					while (g != 0) {
						if (g % 10 == 3) {
							std::cout << "[" << i << "][" << j << "]=" << m[i][j] << "\n";
							break;
						}
						g = g / 10;
					}
				}
				break;
			}
			g = g / 10;
		}
	}

	for (int i = 0; i < l; i++) {
		delete[] m[i];
	}
	delete[] m;
	m = NULL;
	system("pause");
	return 0;
}