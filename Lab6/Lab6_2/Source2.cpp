#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);//Позволяет вводить русские символы в КС
	SetConsoleCP(1251);//Подключает русскую раскалдку

	const int l = 16;// создает константу инт
	const double massiv[l] = { 13,31,23,12,32,43,34,54,34,43,56,56,45,76,56,39 };// создает констунту массив добл
	double newMassiv[l]; //создает новый массив

	for (int i = 0; i < l; i++) {//цикл
		newMassiv[i] = massiv[i] / 18.01;//записывает новые значения в массив
	}
	std::cout << "Старый массив\n";
	for (int i = 0; i < l; i++) {//цикл
		std::cout << " " << massiv[i];//ввывод масива
	}
	std::cout << "\nНовый массив\n";
	for (int i = 0; i < l; i++) {//цикл
		std::cout << " " << newMassiv[i];//ввывод массива
	}
	std::cout << "\n";//ввывод строки
	system("pause");//пауза системы
	return 0;//Возращает 0
}