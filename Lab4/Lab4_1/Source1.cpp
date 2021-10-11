#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double c, k, result;

r:
	std::cout << "Введите M:";
	std::cin >> c;
	std::cout << "Введите K:";
	std::cin >> k;

	if (abs(c + k)>2) {
		std::cout << "Вычисление идет по первой ветке.";
		result = pow(tan(c - 2 * k), 2);
	}
	else {
		if (0.5 <= abs(c + k) && abs(c + k) <= 2) {
			std::cout << "Вычисление идет по второй ветке.";
			result = log(abs(c - 2 * k)) - sin(c / (2 * k));
		}
		else {
			std::cout << "Данная ветка решения не имеет.Введите значение заново.\n";
			goto r;
		}
	}
	std::cout << "\nРезультат вычислений: " << result << "\n";
	system("pause");
	return 0;
}