#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);//��������� ������� ������� ������� � ��
	SetConsoleCP(1251);//���������� ������� ���������

	const int l = 15; //������� ��������� �������
	int massiv[l]; //������� ������ �������
	std::cout << "������� 15 ����� �����\n";//�������� ������
	for (int i = 0; i < l; i++) { // ����
		std::cin >> massiv[i]; // ���������� ����� � ������
	}
	std::cout << "��� ������\n";//�������� ������
	for (int i = 0; i < l; i++) {// ����
		std::cout << "["<< i <<"]=" << massiv[i]<<"\n";//�������� ������
	}
	std::cout << "\n��� ����� ���������� ��� �������\n";//�������� ������
	for (int i = 0; i < l; i++) {// ����
		if (!(massiv[i] % 3 == 0) && massiv[i] >= 0) { //��������
			std::cout << " " << massiv[i]; //�������� ������
		}
	}
	std::cout << "\n";//�������� ������
	system("pause");
	return 0;
}