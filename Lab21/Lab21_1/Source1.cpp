#include "Notebook.h"

int main() {
	system("chcp 1251");

	Notebook* notebook = new Notebook();
	notebook->print();
	notebook->setIndex(4);
	notebook->setD(17);
	notebook->setType('B');
	notebook->setIntel(true);
	char c[25] = "MEGAULTRA-PC";
	notebook->setModel(c);
	notebook->setKey(34, 43, 34);
	notebook->print();
	notebook->checkD();
	int index;
	double d;
	char type;
	bool intel;
	char model[25];
	int key[3];

	std::cout << "������� ������\n";
	std::cin >> index;
	std::cout << "������� ���������\n";
	std::cin >> d;
	std::cout << "������� ���\n";
	std::cin >> type;
	std::cout << "������� ����� ��(0 - ���, 1 - ��)\n";
	std::cin >> intel;
	std::cout << "������� ������\n";
	gets_s(c, 25);
	std::cout << "������� 3 ����� ������\n";
	std::cin >> key[0];
	std::cin >> key[1];
	std::cin >> key[2];
	Notebook* notebook1 = new Notebook(index,d,type,intel,c,key[0],key[1],key[2]);
	notebook1->print();
	notebook1->checkD();

	notebook->~Notebook();
	delete notebook1;

	system("pause");
	return 0;
}