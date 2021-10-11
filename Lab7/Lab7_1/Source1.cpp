#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int l = 93;
	long long massiv[l];
	massiv[0] = 0;
	massiv[1] = 1;
	for (int i = 2; i < l; i++) {
		massiv[i] = massiv[i - 1] + massiv[i - 2];
	}
	std::cout << "Ваш массив\n";
	for (int i = 0; i < l; i++) {
		std::cout << "[" << i << "]=" << massiv[i] << "\n";
	}
	system("pause");
	return 0;
}