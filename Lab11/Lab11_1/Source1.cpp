#include <iostream>
#include <Windows.h>
#include <cmath>

bool zadanie1(int mas[], int masL, int num);
int zadanie2(int mas[], int masL, int* sum, int& pro);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int l;
	std::cout << "Введите размер массива\n";
	std::cin >> l;

	int* mas = new int[l];
	if (mas == NULL) {
		std::cout << "Ошибка выделения памяти\n";
		system("pause");
		return 0;
	}

	std::cout << "Введите элементы массива\n";
	for (int i = 0; i < l; i++) {
		std::cin >> mas[i];
	}

	int n;
	std::cout << "Введите число N\n";
	std::cin >> n;
	if(zadanie1(mas, l, 2)){
		std::cout << "Все четные по индексу элементы массива кратны числу " << n << "\n";
	}
	else {
		std::cout << "Не все четные по индексу элементы массива кратны числу "<< n << "\n";
	}

	int pro = 1 ,sum = 0;
	std::cout << "В массиве " << zadanie2(mas, l, &sum, pro) << " отрицательных чисел, сумма всех элементов, значение которых кратных 6, равна " << sum << ", а произведение равно " << pro << "\n";
	system("pause");
	return 0;
}

bool zadanie1(int mas[], int masL, int num) {
	for (int i = 0; i < masL; i += 2) {
		if (mas[i] % num != 0) {
			return false;
		}
	}
	return true;
}

int zadanie2(int mas[], int masL, int* sum, int& pro) {
	int s = 0;
	for (int i = 0; i < masL; i++) {
		if (mas[i] % 6 == 0) {
			*sum += mas[i];
			pro *= mas[i];
		}
		if (mas[i] < 0) {
			s++;
		}
	}
	return s;
}