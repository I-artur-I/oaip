#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, result;
	int f;

	std::cout << "Введите X:";
	std::cin >> x;
	std::cout << "Введите Y:";
	std::cin >> y;
	_f:
	std::cout << "Введите выбор функции:\n\t1) e^x\n\t2) x^2\n";
	std::cin >> f;
	switch (f) {
	case 1: {
		result = exp(x);
		break;
	}
	case 2: {
		result = pow(x, 2);
		break;
	}
	default: {
		std::cout << "Выберите функцию еще раз\n";
		goto _f;
		break;
	}
	}

	if (x+y>0) {
		std::cout << "Вычисление идет по первой ветке.";
		result = log(result) + pow(pow(result,2)+y, 3);
	}
	else {
		if (x + y < 0) {
			std::cout << "Вычисление идет по второй ветке.";
			result = log(abs(result/y)) + pow(result + y, 3);
		}
		else {
			std::cout << "Вычисление идет по третий ветке.";
			result = pow(pow(result, 2) + y, 3);
		}
	}
	std::cout << "\nРезультат вычислений: " << result << "\n";
	system("pause");
	return 0;
}