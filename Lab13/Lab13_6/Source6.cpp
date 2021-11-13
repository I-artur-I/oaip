#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	system("chcp 1251");

	const int l = 100;
	char* s = new char[l];
	int n = 0;
	std::cout << "\nВведите текст(до 100 символов):\n";
	gets_s(s, l);
	int size = strlen(s);
	int new_size = size+1;
	char* sn;
	if (strlen(s) > 10) {
		for (int i = 0; i < size; i++) {
			if (s[i] <= '9' && s[i] >= '0') {
				new_size--;
			}
		}
		sn = new char[new_size];
		for (int i = 0; i < size; i++) {
			if (!(s[i] <= '9' && s[i] >= '0')) {
				strncat(sn,s+i,1);
			}
		}
		std::cout << "Строка после обработки\n\n" << sn << "\n";
	}
	else {
		std::cout << "Строка меньше 10 символов\n";
	}
	
	system("pause");
	return 0;
}