#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, y, result;
	int f;

	std::cout << "������� X:";
	std::cin >> x;
	std::cout << "������� Y:";
	std::cin >> y;
	_f:
	std::cout << "������� ����� �������:\n\t1) e^x\n\t2) x^2\n";
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
		std::cout << "�������� ������� ��� ���\n";
		goto _f;
		break;
	}
	}

	if (x+y>0) {
		std::cout << "���������� ���� �� ������ �����.";
		result = log(result) + pow(pow(result,2)+y, 3);
	}
	else {
		if (x + y < 0) {
			std::cout << "���������� ���� �� ������ �����.";
			result = log(abs(result/y)) + pow(result + y, 3);
		}
		else {
			std::cout << "���������� ���� �� ������ �����.";
			result = pow(pow(result, 2) + y, 3);
		}
	}
	std::cout << "\n��������� ����������: " << result << "\n";
	system("pause");
	return 0;
}