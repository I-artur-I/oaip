#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int l = 15;
	double massiv[l];
	std::cout << "������� 15 ������������ ����� �����\n";
	for (int i = 0; i < l; i++) {
		std::cin >> massiv[i];
	}
	std::cout << "��� ������\n";
	for (int i = 0; i < l; i++) {
		std::cout << "["<<i<<"]=" << massiv[i]<<"\n";
	}
	std::cout << "��� ����� ���������� ��� �������\n";
	for (int i = 0; i < l; i++) {
		if ((i > 6 || i < 3) && i%2 == 0) {
			std::cout << "[" << i << "]=" << massiv[i] << "\n";
		}
	}
	std::cout << "\n";
	system("pause");
	return 0;
}