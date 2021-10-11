#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int length, negativOne = -1, negativeTwo = -1;
	std::cout << "Введите размер массива\n";
	std::cin >> length;
	int* massiv = new int[length];

	std::cout << "Введи значения для массива\n";
	for (int i = 0; i < length; i++) {
		std::cin >> massiv[i];
	}

	for (int i = 0; i < length; i++) {
		if(massiv[i]<0){
			negativOne = i;
			break;
		}
	}
	for (int i = negativOne + 1; i < length; i++) {
		if (massiv[i] < 0) {
			negativeTwo = i;
			break;
		}
	}

	if (negativeTwo == -1) {
		std::cout << "В массиве отсутствует два отрицательные числа\n";
	}
	else {
		int sum = 0;
		for (int i = negativOne + 1; i < negativeTwo; i++) {
			sum += massiv[i];
		}	
		std::cout << "Сумма между первым и вторым отрицательным числом в массиве равна " << sum << "\n";
	}

	delete[] massiv;
	system("pause");
	return 0;
}