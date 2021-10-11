#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int l1 = 5, l2 = 4;
	int *m1 = new int[l1];
	int *m2 = new int[l2];

	std::cout << "����� �������� ��� ������� �������\n";
	for (int i = 0; i < l1; i++) {
		std::cin >> m1[i];
	}
	std::cout << "����� �������� ��� ������� �������\n";
	for (int i = 0; i < l2; i++) {
		std::cin >> m2[i];
	}

	int min1 = 0;
	for (int i = 0; i < l1; i++) {
		if (m1[min1] > m1[i]) {
			min1 = i;
		}
	}
	int min2 = 0;
	for (int i = 0; i < l2; i++) {
		if (m2[min2] > m2[i]) {
			min2 = i;
		}
	}

	if (m1[min1] < m2[min2])
	{
		std::cout << "���������� ����� " << m1[min1] << " � ������ ������� �� "<< min1+1 <<" �����\n ������ ";
		for (int i = 0; i < l1; i++) {
			std::cout << m1[i] << " ";
		}
		
	}
	else {
		std::cout << "���������� ����� " << m2[min2] << " �� ������ ������� �� " << min2+1 << " �����\n ������ ";
		for (int i = 0; i < l2; i++) {
			std::cout << m2[i] << " ";
		}

	}
	
	delete[] m1;
	delete[] m2;
	m1 = NULL;
	m2 = NULL;
	system("pause");
	return 0;
}