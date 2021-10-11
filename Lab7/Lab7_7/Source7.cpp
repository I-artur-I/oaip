#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 7;
	const int stolbch = 4;
	const double massiv[stroki][stolbch] = { {2.4,24.4,3.4,4.34}, {76.47,746.7,765,98}, {23,323,6,6.0}, {4.5,45.45,35.53,55}, {84.86,74.6,46,4}, {1,2,3.4,5.4}, {1.23,1,1,999.99} };
	
	std::cout << "Ваш массив\n";

	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << "\t";
		}
		std::cout << "\n";
	}
	
	std::cout << "Ваш массив без четных строк\n";

	for (int i = 0; i < stroki; i+=2) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << "\t";
		}
		std::cout << "\n";
		
	}

	system("pause");
	return 0;
}