#include<iostream>

//задание 1
struct Bisnesman
{
	int age;
	double money;
	char typeMoney;
	bool isLive;
	char name[25];
	int phone[2];
};

void printBisnesman(Bisnesman bisnesman) {
	std::cout << bisnesman.age << " | "
		<< bisnesman.money << " | "
		<< bisnesman.typeMoney << " | "
		<< bisnesman.isLive << " | "
		<< bisnesman.name << "|"
		<< bisnesman.phone[0] << "|"
		<< bisnesman.phone[1] << "\n";
}

void printBisnesman_p(Bisnesman* bisnesman) {
	std::cout << bisnesman->age << " | "
		<< bisnesman->money << " | "
		<< bisnesman->typeMoney << " | "
		<< bisnesman->isLive << " | "
		<< bisnesman->name << "|"
		<< bisnesman->phone[0] << "|"
		<< bisnesman->phone[1] << "\n";
}

int main() {
	system("chcp 1251");

	const int l = 2;
	Bisnesman man[l];

	//задание 2
	for (int i = 0; i < l; i++) {
		std::cout << "Ведите возраст: ";
		std::cin >> man[i].age;
		std::cout << "Ведите капитал: ";
		std::cin >> man[i].money;
		std::cout << "Ведите тип валюты: ";
		std::cin >> man[i].typeMoney;
		std::cout << "Ведите жив ли бизнесмен (0 = нет, 1 = да): ";
		std::cin >> man[i].isLive;
		std::cout << "Ведите имя: ";
		std::cin >> man[i].name;
		std::cout << "Ведите первый телефон: ";
		std::cin >> man[i].phone[0];
		std::cout << "Ведите второй телефон: ";
		std::cin >> man[i].phone[1];
	}

	//задание 3
	for (int i = 0; i < l; i++) {
		printBisnesman(man[i]);
	}

	//Задание 4
	int x;
	std::cout << "Введите X";
	std::cin >> x;
	int j=0;
	for (int i = 0; i < l; i++) {
		if (man[i].age <= x) {
			std::cout << "Поле возраста меньше Х у бизнесмена " << i << "\n";
			j++;
		}
		if (man[i].phone[0] <= x) {
			std::cout << "Поле первого телефона меньше Х у бизнесмена " << i << "\n";
			j++;
		}
		if (man[i].phone[1] <= x) {
			std::cout << "Поле второго телефона меньше Х у бизнесмена " << i << "\n";
			j++;
		}
	}
	std::cout << "Всего найдено таких полей " << j;

	//Задание 5
	Bisnesman* man = new Bisnesman[l];
	/// <summary>
	/// ///////////////////////////////////////////////////////
	/// </summary>
	/// <returns></returns>
	for (int i = 0; i < l; i++) {
		std::cout << "Ведите возраст: ";
		std::cin >> (man+i)->age;
		std::cout << "Ведите капитал: ";
		std::cin >> (man + i)->money;
		std::cout << "Ведите тип валюты: ";
		std::cin >> (man + i)->typeMoney;
		std::cout << "Ведите жив ли бизнесмен (0 = нет, 1 = да): ";
		std::cin >> (man + i)->isLive;
		std::cout << "Ведите имя: ";
		std::cin >> (man + i)->name;
		std::cout << "Ведите первый телефон: ";
		std::cin >> (man + i)->phone[0];
		std::cout << "Ведите второй телефон: ";
		std::cin >> (man + i)->phone[1];
	}
	for (int i = 0; i < l; i++) {
		printBisnesman_p(man+i);
	}

	system("pause");
	return;
}