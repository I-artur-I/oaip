#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double c, k, result;

r:
	std::cout << "������� M:";
	std::cin >> c;
	std::cout << "������� K:";
	std::cin >> k;

	if (abs(c + k)>2) {
		std::cout << "���������� ���� �� ������ �����.";
		result = pow(tan(c - 2 * k), 2);
	}
	else {
		if (0.5 <= abs(c + k) && abs(c + k) <= 2) {
			std::cout << "���������� ���� �� ������ �����.";
			result = log(abs(c - 2 * k)) - sin(c / (2 * k));
		}
		else {
			std::cout << "������ ����� ������� �� �����.������� �������� ������.\n";
			goto r;
		}
	}
	std::cout << "\n��������� ����������: " << result << "\n";
	system("pause");
	return 0;
}