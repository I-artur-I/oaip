#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	const int l = 10;
	int massiv[l];
	std::cout << "Введите 10 целый чисел\n";
	for (int i = 0; i < l; i++) {
		std::cin >> massiv[i];
	}
	std::cout << "Ваш массив\n";
	for (int i = 0; i < l; i++) {
		std::cout << " " << massiv[i];
	}
	std::cout << "\nПроизведение чисел подходящих под условие:";
	int pro = 1;
	for (int i = 0; i < l; i++) {
		if (massiv[i] % 3 != 0) {
			pro *= massiv[i];
		}
	}
	std::cout << pro <<"\n";
	system("pause");
	return 0;
}