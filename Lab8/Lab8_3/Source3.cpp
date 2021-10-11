#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int length = 10;
	double* massiv = new double[length]{-4.26, 5.66, -2.70, 10.16, 1.12, -7.14, -5.16, 4.26, 0.99, 3.15};
	double result = 0;


	for (int i = 0; i < length; i++) {
		if (massiv[i] > 0) {
			result += massiv[i];
		}
	}
	std::cout << "Cумму положительных элементов массива:\n" << result;
    

	int min = 0, max = 0;
	for (int i = 0; i < length; i++) {
		if (abs(massiv[i]) > abs(massiv[max])) {
			max = i;
		}
		if (abs(massiv[i]) < abs(massiv[min])) {
			min = i;
		}
	}
	result = 1;
	for (int i = (min < max ? min : max) + 1; i < (min > max ? min : max); i++) {
			result *= massiv[i];
	}
	std::cout << "\nПроизведение элементов массива, расположенных между максимальным по модулю и минимальным по модулю элементами:\n" << result;


	for (int i = 0; i < length; i++) {
		int max = i;
		for (int j = i; j < length; j++) {
			if (massiv[max] < massiv[j]) {
				max = j;
			}
		}
		double buf = massiv[i];
		massiv[i] = massiv[max];
		massiv[max] = buf;
	}
	std::cout << "\nМассив, упорядоченный по убыванию:\n";
	for (int i = 0; i < length; i++) {
		std::cout << massiv[i] << " ";
	}

	delete[] massiv;
	system("pause");
	return 0;
}