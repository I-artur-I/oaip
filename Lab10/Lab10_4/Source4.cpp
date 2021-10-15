#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	const int l = 100;
	char m[l];
	std::cout << "Введи ваше предложение\n";
	std::cin.getline(m,l);
	std::cout << "Адреса всех пробелов\n";
	for (int i = 0; i < l; i++) {
		if (m[i] == ' ') {
			char* p = &m[i];
			std::cout << p << "\n";
		}
	}
	system("pause");
	return 0;
}