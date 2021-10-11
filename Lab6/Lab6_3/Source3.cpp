#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);//Позволяет вводить русские символы в КС
	SetConsoleCP(1251);//Подключает русскую раскалдку

	const int l = 15; //создает констунту Интегер
	int massiv[l]; //создает массив интегер
	std::cout << "Введите 15 целый чисел\n";//ввыводит строку
	for (int i = 0; i < l; i++) { // цикл
		std::cin >> massiv[i]; // записывает число в массив
	}
	std::cout << "Ваш массив\n";//ввыводит строку
	for (int i = 0; i < l; i++) {// цикл
		std::cout << "["<< i <<"]=" << massiv[i]<<"\n";//ввыводит массив
	}
	std::cout << "\nВсе числа подходящие под условие\n";//ввыводит строку
	for (int i = 0; i < l; i++) {// цикл
		if (!(massiv[i] % 3 == 0) && massiv[i] >= 0) { //ветление
			std::cout << " " << massiv[i]; //ввыводит массив
		}
	}
	std::cout << "\n";//ввыводит строку
	system("pause");
	return 0;
}