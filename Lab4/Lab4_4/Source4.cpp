#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int i;

	std::cout << "������� ��� �������� �������� \n";
	std::cin >> i;
	while (i > 0) {
		switch (i) {
		case 1610:
			std::cout << "�������� - ������ \n";
			std::cout << "�� - ������ \n";
			std::cout << "������ - ������ \n";
			std::cout << "�������� - ������ \n";
			break;
		case 1655:
			std::cout << "����� - ������ \n";
			break;
		case 1671:
			std::cout << "���� - ������ \n";
			break;
		case 1672:
			std::cout << "��� - ������ \n";
			break;
		case 1684:
			std::cout << "����� - ������ \n";
			std::cout << "����� - ������ \n";
			break;
		case 1787:
			std::cout << "������� - ����\n";
			std::cout << "������ - ����\n";
			break;
		case 1846:
			std::cout << "������ - ������\n";
			break;
		case 1851:
			std::cout << "�������� - ����\n";
			std::cout << "������ - ����\n";
			break;
		case 1877:
			std::cout << "����� - ����\n";
			std::cout << "������ - ����\n";
			break;
		case 1974:
			std::cout << "���� - ������\n";
			break;
		case 1978:
			std::cout << "����� - ������\n";
			break;
		}
		i--;
	}
	
	system("pause");
	return 0;
}