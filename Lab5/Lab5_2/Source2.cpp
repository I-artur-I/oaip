#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int t;
	long long b = 1;

	std::cout << "������� ���������� �����\n";
	std::cin >> t;
	for (int i = 0; i <= t; i++) { // ������ ���� ����� �������� �� b = pow(2,t);
		b = b * 2;
	}

	std::cout << "����� "<< t <<" ����� ����� "<< b <<" ��������\n";
	system("pause");
	return 0;
}