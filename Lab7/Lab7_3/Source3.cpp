#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int stroki = 2;
	const int stolbch = 3;
	const char massiv[stroki][stolbch] = { {132,123,43} ,{54,128,65} };
	
	std::cout << "Ваш двухмерный массив\n";
	for (int i = 0; i < stroki; i++) {
		for (int j = 0; j < stolbch; j++) {
			std::cout << massiv[i][j] << "\t";
		}
		std::cout << "\n";
	}
	system("pause");
	return 0;
}