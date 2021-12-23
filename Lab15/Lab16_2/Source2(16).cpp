#include <iostream>

struct Order
{
	long long sPlat;
	long long sPoly;
	long long sum;
};

int main() {
	const int l = 10;
	Order* orders = new Order[l];
	if (orders == NULL) {
		return 0;
	}
	for (int i = 0; i < l; i++) {
		std::cout << "Введите счет плательщика: ";
		std::cin >> orders[i].sPlat;
		std::cout << "Введите счет получателя: ";
		std::cin >> orders[i].sPoly;
		std::cout << "Введите количество валюты: ";
		std::cin >> orders[i].sum;
	}
	
	long long x;
	std::cout << "\nВведите счет о котором хотите получить информaцию:";
	std::cin >> x;
	bool isFind = false;
	for (int i = 0; i < l; i++) {
		if(x == orders[i].sPlat){
			std::cout << "С данного счета снята сумма "<< orders[i].sum;
			isFind = true;
		}
	}

	if (!isFind) {
		std::cout << "Счет не найден";
	}

	delete[] orders;
	system("pause");
	return 0;
}