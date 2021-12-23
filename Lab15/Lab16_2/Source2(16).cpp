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
		std::cout << "������� ���� �����������: ";
		std::cin >> orders[i].sPlat;
		std::cout << "������� ���� ����������: ";
		std::cin >> orders[i].sPoly;
		std::cout << "������� ���������� ������: ";
		std::cin >> orders[i].sum;
	}
	
	long long x;
	std::cout << "\n������� ���� � ������� ������ �������� ������a���:";
	std::cin >> x;
	bool isFind = false;
	for (int i = 0; i < l; i++) {
		if(x == orders[i].sPlat){
			std::cout << "� ������� ����� ����� ����� "<< orders[i].sum;
			isFind = true;
		}
	}

	if (!isFind) {
		std::cout << "���� �� ������";
	}

	delete[] orders;
	system("pause");
	return 0;
}