#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	short int num;
	short int* p = &num;
	short int& u = num;
	std::cout << "A���� ����������: " << p << "\n�������� ������, ������� �������� � ���������: " << *p << "\n�������� ������, ������� �������� � ������: " << u;
	std::cout << "\n\n������� �������� ���������� \n";
	std::cin >> num;
	std::cout << "\n�������� ���������� ��������� ��� ������...\n����� ����������: " << num <<"\n���������: " << *p << "\n������: " << u;
	std::cout << "\n\n�������� ���������� ��������� �� 7 \n\n";
	num += 7;
	std::cout << "�������� ���������� ��������� ��� ������...\n����� ����������: " << num << "\n���������: " << *p << "\n������: " << u <<"\n\n";

	system("pause");
	return 0;
}