#include <iostream>

int main() {
	system("chcp 1251");
	const int l = 100;
	char* s0 = new char[l];
	char* s1 = new char[l];
	std::cout << "\n������� �����(�� 100 ��������):\n";
	gets_s(s0, l);
	std::cout << "\n������� ������� ��������� (�� 100 ��������):\n";
	gets_s(s1, l);
	std::cout << s1 << std::endl;
	if (strstr(s0, s1) != NULL) {
		std::cout << "���� ��������� " << s1 << " � ������: " << s0 << std::endl;
	}
	else {
		std::cout << "��������� " << s1 << " ���  � ������: " << s0 << std::endl;
	}
	system("pause");
	return 0;
}