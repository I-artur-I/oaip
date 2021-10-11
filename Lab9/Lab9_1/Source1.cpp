#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int l, w;
	std::cout << "����� �������� ��� ������� �������\n";
	do {
		std::cin >> l;
		std::cin >> w;
	} while (l < 0 || w < 0);
	char** m = new char*[l];
	if (m == NULL) {
		std::cout << "�� ������� ������� ����� � ������ ��� ������";
		return 1;
	}
	for (int i = 0; i < l; i++) {
		m[i] = new char[w];
		if (m[i] == NULL) {
			std::cout << "�� ������� ������� ����� � ������ ��� ������";
			return 1;
		}
	}
	std::cout << "����� ������� ��� �������\n";
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < w; j++) {
			std::cout << "[" << i << "][" << j << "]=";
			std::cin >> m[i][j];
		}
	}

	std::cout << "��� ������\n";
	for (int i = 0; i < l; i++) {
		std::cout << "|";
		for (int j = 0; j < w; j++) {
			std::cout << m[i][j] << " | ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < l; i++) {
		delete[] m[i];
	}
	delete[] m;
	m = NULL;
	system("pause");
	return 0;
}