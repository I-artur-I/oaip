#include <Windows.h>
#include <iostream>
#include "HeaderChernyakov.h"

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int l, w;
	std::cout << "������� ������ �������\n";
	do {
		std::cin >> l;
		std::cin >> w;
	} while (l < 0 || w < 0);
    long double** m = new long double* [l];
	if (m == NULL) {
		std::cout << "������ ��������� ������";
		return 1;
	}
	for (int i = 0; i < l; i++) {
		m[i] = new long double[w];
		if (m[i] == NULL) {
			std::cout << "������ ��������� ������";
			return 1;
		}
	}

	std::cout << "������� �������� �������\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			std::cout << "[" << i << "][" << j << "]=";
			std::cin >> m[i][j];
		}
	}
	std::cout << "C���� ������ �� �������� ������������� ��������� ������� ��������� ����� " << z2(m, l, w) << "\n";
	std::cout << "������������ ���� ���������, �� �������� � ������� ���������, ������ �� ������� ������ ����� ��������� ������� ��������� ����� " << z3(m, l, w) << "\n";
	double x, p;
	std::cout << "������� X � P\n";
	std::cin >> x;
	std::cin >> p;
	double min = _min(m, l, w);
	double max = _max(m, l, w);
	std::cout << "������������ ��������:" << max << "\n����������� ��������:" << min << "\n";
	if (min > x && min < p) {
	     std::cout << "����������� �������� ���������� �� � �� �\n";
	}
	if (max > x && max < p) {
		std::cout << "������������ �������� ���������� �� � �� �\n";
	}
	std::cout << "���������� ��������� �������, �������� ������� �� ������� ������ �������� ��������������� �������� ���� ��������� �������, � ������� �� ����������� � ������� ��������� ����� " << z5(m, l, w) << "\n";

}