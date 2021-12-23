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

	std::cout << "¬ведите индекс\n";
	std::cin >> index;
	std::cout << "¬ведите диагональ\n";
	std::cin >> d;
	std::cout << "¬ведите тип\n";
	std::cin >> type;
	std::cout << "¬ведите интел ли(0 - нет, 1 - да)\n";
	std::cin >> intel;
	std::cout << "¬ведите модель\n";
	gets_s(c, 25);
	std::cout << "¬ведите 3 ключа защиты\n";
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