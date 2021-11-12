#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	system("chcp 1251");

	const int l = 100;
	char* s = new char[l];
	int n = 0;
	std::cout << "\nВведите текст(до 100 символов):\n";
	gets_s(s, l);
	if (strlen(s) > 10) {
		for (int i = 0; i < strlen(s); i++) {
			if (s[i] <= '1' && s[i] >= '0') {
				char* sn = new char[strlen(s) - 1];
				strncpy(sn, s, i - 1);
				strcat(sn, s);
				strcpy(s, sn);
				delete[] sn;
			}
		}
	}
	std::cout << "Строка после обработки\n\n" << s<<"\n";
	system("pause");
	return 0;
}