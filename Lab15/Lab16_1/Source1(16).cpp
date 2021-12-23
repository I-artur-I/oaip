#include<iostream>

//������� 1
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

	//������� 2
	for (int i = 0; i < l; i++) {
		std::cout << "������ �������: ";
		std::cin >> man[i].age;
		std::cout << "������ �������: ";
		std::cin >> man[i].money;
		std::cout << "������ ��� ������: ";
		std::cin >> man[i].typeMoney;
		std::cout << "������ ��� �� ��������� (0 = ���, 1 = ��): ";
		std::cin >> man[i].isLive;
		std::cout << "������ ���: ";
		std::cin >> man[i].name;
		std::cout << "������ ������ �������: ";
		std::cin >> man[i].phone[0];
		std::cout << "������ ������ �������: ";
		std::cin >> man[i].phone[1];
	}

	//������� 3
	for (int i = 0; i < l; i++) {
		printBisnesman(man[i]);
	}

	//������� 4
	int x;
	std::cout << "������� X";
	std::cin >> x;
	int j=0;
	for (int i = 0; i < l; i++) {
		if (man[i].age <= x) {
			std::cout << "���� �������� ������ � � ���������� " << i << "\n";
			j++;
		}
		if (man[i].phone[0] <= x) {
			std::cout << "���� ������� �������� ������ � � ���������� " << i << "\n";
			j++;
		}
		if (man[i].phone[1] <= x) {
			std::cout << "���� ������� �������� ������ � � ���������� " << i << "\n";
			j++;
		}
	}
	std::cout << "����� ������� ����� ����� " << j;

	//������� 5
	Bisnesman* man = new Bisnesman[l];
	/// <summary>
	/// ///////////////////////////////////////////////////////
	/// </summary>
	/// <returns></returns>
	for (int i = 0; i < l; i++) {
		std::cout << "������ �������: ";
		std::cin >> (man+i)->age;
		std::cout << "������ �������: ";
		std::cin >> (man + i)->money;
		std::cout << "������ ��� ������: ";
		std::cin >> (man + i)->typeMoney;
		std::cout << "������ ��� �� ��������� (0 = ���, 1 = ��): ";
		std::cin >> (man + i)->isLive;
		std::cout << "������ ���: ";
		std::cin >> (man + i)->name;
		std::cout << "������ ������ �������: ";
		std::cin >> (man + i)->phone[0];
		std::cout << "������ ������ �������: ";
		std::cin >> (man + i)->phone[1];
	}
	for (int i = 0; i < l; i++) {
		printBisnesman_p(man+i);
	}

	system("pause");
	return;
}