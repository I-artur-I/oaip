#include<iostream>

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
	std::cout << bisnesman.age << " | " << "\n";
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

Bisnesman* sort(Bisnesman* bisnesmans, int n ) {
	for (int i = 0; i < n; i++) {
		int min = 1 + i;
		for (int j = 0; j < n; j++) {
			if (bisnesmans[min].age > bisnesmans[j].age) {
				min = j;
			}
		}
		Bisnesman buf = bisnesmans[min];
		bisnesmans[min] = bisnesmans[i];
		bisnesmans[i] = buf;
	}
	return bisnesmans;
}

int main() {
	system("chcp 1251");
	Bisnesman* mans = new Bisnesman[5];
	mans[0]= { 1324, 500, 'b', true ,"Vlad",{1317626,5553535} };
	mans[1] = { 1347, 500, 'b', true ,"Vlad",{1317626,5553535} };
	mans[2] = { 117, 500, 'b', true ,"Vlad",{1317626,5553535} };
	mans[3] = { 517, 500, 'b', true ,"Vlad",{1317626,5553535} };
	mans[4] = { 173, 500, 'b', true ,"Vlad",{1317626,5553535} };
	for (int i = 0; i < 5; i++) {
		printBisnesman(mans[i]);
	}
	sort(mans,5);
	std::cout << "сорт\n";
	for (int i = 0; i < 5; i++) {
		printBisnesman(mans[i]);
	}
	system("pause");
	return 0;
}

/*int main() {
	system("chcp 1251");

	//Задание 2
	Bisnesman man = { 17, 500, 'b', true ,"Vlad",{1317626,5553535}};
	printBisnesman(man);

	//Задание 3
	Bisnesman man1;
	std::cout << "Ведите возраст: ";
	std::cin >> man1.age;
	std::cout << "Ведите капитал: ";
	std::cin >> man1.money;
	std::cout << "Ведите тип валюты: ";
	std::cin >> man1.typeMoney;
	std::cout << "Ведите жив ли бизнесмен (0 = нет, 1 = да): ";
	std::cin >> man1.isLive;
	std::cout << "Ведите имя: ";
	std::cin >> man1.name;
	std::cout << "Ведите первый телефон: ";
	std::cin >> man1.phone[0];
	std::cout << "Ведите второй телефон: ";
	std::cin >> man1.phone[1];


	//Задание 4
	Bisnesman* man2 = new Bisnesman;
	man2->age = 24;
	man2->money = 233;
	man2->typeMoney = 'd';	
	man2->isLive = true;
	strcpy_s(man2->name, 25, "dfggghh");
	//man2->name = "ро";
	man2->phone[0] = 5553535;
	man2->phone[1] = 1234567;
	printBisnesman_p(man2);

	//Задание 5
	Bisnesman& man_s = man;
	printBisnesman(man_s);

	system("pause");
	return 0; 
}*/