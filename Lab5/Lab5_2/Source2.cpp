#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int t;
	long long b = 1;

	std::cout << "¬ведите количество минут\n";
	std::cin >> t;
	for (int i = 0; i <= t; i++) { // данный цикл можно заменить на b = pow(2,t);
		b = b * 2;
	}

	std::cout << "„ерез "<< t <<" минут будет "<< b <<" бактерий\n";
	system("pause");
	return 0;
}