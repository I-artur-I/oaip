#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	system("chcp 1251");
	const int l = 100;
	char s[l];
	char* p;
	char d[1];
	std::cout << "\n������� �����(�� 100 ��������):\n";
	gets_s(s, l);
	std::cout << "\n������� ��������-������������ (1 ������):\n";
	gets_s(d, 2);
	p = strtok(s, d);
	std::cout << s << std::endl;
	while (p != NULL) {
		std::cout << p << std::endl;
		p = strtok(NULL, d);
	}
	system("pause");
	return 0;
}