#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);//��������� ������� ������� ������� � ��
	SetConsoleCP(1251);//���������� ������� ���������

	const int l = 16;// ������� ��������� ���
	const double massiv[l] = { 13,31,23,12,32,43,34,54,34,43,56,56,45,76,56,39 };// ������� ��������� ������ ����
	double newMassiv[l]; //������� ����� ������

	for (int i = 0; i < l; i++) {//����
		newMassiv[i] = massiv[i] / 18.01;//���������� ����� �������� � ������
	}
	std::cout << "������ ������\n";
	for (int i = 0; i < l; i++) {//����
		std::cout << " " << massiv[i];//������ ������
	}
	std::cout << "\n����� ������\n";
	for (int i = 0; i < l; i++) {//����
		std::cout << " " << newMassiv[i];//������ �������
	}
	std::cout << "\n";//������ ������
	system("pause");//����� �������
	return 0;//��������� 0
}