#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	const int l = 100;
	char m[l];
	std::cout << "¬веди ваше предложение\n";
	std::cin.getline(m,l);
	std::cout << "јдреса всех пробелов\n";
	for (int i = 0; i < l; i++) {
		if (m[i] == ' ') {
			char* p = m+i;
			std::cout << p << "\n"; //cout вместо вывода адреса воспринимает указатель как начало строки и печает ее полностью 
		}
	}
	system("pause");
	return 0;
}