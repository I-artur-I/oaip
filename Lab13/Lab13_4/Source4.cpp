#include <iostream>

int main() {
	system("chcp 1251");
		
	const int l = 100;
	char* s = new char[l];
	int n = 0;
	std::cout << "\nВведите текст(до 100 символов):\n";
	gets_s(s, l);
	for (int i = 0; i < strlen(s);i++){
		if (s[i] <= 'W' && s[i] >= 'A') {
			n++;
		}
	}
	std::cout << "В тексте найдено " << n << " заглавный букв" << "\n";
	system("pause");
	return 0;
}