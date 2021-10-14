#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	short int num;
	short int* p = &num;
	short int& u = num;
	std::cout << "Aдрес переменной: " << p << "\nЗначение адреса, который хранится в указателе: " << *p << "\nЗначение адреса, который хранится в ссылке: " << u;
	std::cout << "\n\nВведите значение переменной \n";
	std::cin >> num;
	std::cout << "\nЗначение переменной выводимое при помощи...\nИмени переменной: " << num <<"\nУказателя: " << *p << "\nСсылки: " << u;
	std::cout << "\n\nЗначение переменной увеличино на 7 \n\n";
	num += 7;
	std::cout << "Значение переменной выводимое при помощи...\nИмени переменной: " << num << "\nУказателя: " << *p << "\nСсылки: " << u <<"\n\n";

	system("pause");
	return 0;
}