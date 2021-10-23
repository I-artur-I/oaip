#include <Windows.h>
#include <iostream>
#include "HeaderChernyakov.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int l, w;
	std::cout << "Введите размер массива\n";
	do {
		std::cin >> l;
		std::cin >> w;
	} while (l < 0 || w < 0);
    long double** m = new long double* [l];
	if (m == NULL) {
		std::cout << "Ошибка выделения памяти";
		return 1;
	}
	for (int i = 0; i < l; i++) {
		m[i] = new long double[w];
		if (m[i] == NULL) {
			std::cout << "Ошибка выделения памяти";
			return 1;
		}
	}

	std::cout << "Введиет элементы массива\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			std::cout << "[" << i << "][" << j << "]=";
			std::cin >> m[i][j];
		}
	}
	std::cout << "Cумму корней из значений положительных элементов главной диагонали равна " << z2(m, l, w) << "\n";
	std::cout << "Произведение всех элементов, не входящих в главную диагональ, каждый из которых меньше суммы элементов главной диагонали равна " << z3(m, l, w) << "\n";
	double x, p;
	std::cout << "Введите X и P\n";
	std::cin >> x;
	std::cin >> p;
	double min = _min(m, l, w);
	double max = _max(m, l, w);
	std::cout << "Максимальное значение:" << max << "\nМинимальное значение:" << min << "\n";
	if (min > x && min < p) {
	     std::cout << "Минимальное значение расположен от Х до Р\n";
	}
	if (max > x && max < p) {
		std::cout << "Максимальное значение расположен от Х до Р\n";
	}
	std::cout << "Количество элементов массива, значение каждого из которых меньше среднего арифметического значения всех элементов массива, а индексы не принадлежат к главной диагонали равна " << z5(m, l, w) << "\n";

}