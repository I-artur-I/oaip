#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int l = 15;
	const int m[l] = { 13,31,23,12,32,43,34,54,34,43,56,56,45,76,56 };
	int newM[l];

	for (int i = 0; i < l; i++) {
		newM[i] = m[l - i - 1];
	}
	
	for (int i = 0; i < l; i++) {
		std::cout << " " << m[i];
	}
	std::cout << "\n" ;
	for (int i = 0; i < l; i++) {
		std::cout << " " << newM[i];
	}
	std::cout << "\n";
	system("pause");
	return 0;
}