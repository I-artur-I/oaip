#include <iostream>
#include <set>

int main() {
	srand(time(NULL));
	system("chcp 1251");
	std::set<int> a;
	std::set<int> b;
	std::set<int> c;
	
	for (int i = 0; i < 10; i++) {
		a.insert(rand()%100);
		b.insert(rand() % 100);
	}

	std::cout << "\nМножество А:\n";
	for (std::set<int>::iterator i = a.begin(); i != a.end(); i++) {
		std::cout << *i << " ";
		c.insert(*i);
	}

	std::cout << "\nМножество B:\n";
	for (std::set<int>::iterator i = b.begin(); i != b.end(); i++) {
		std::cout << *i << " ";
		c.insert(*i);
	}
	std::set<int>::reverse_iterator rr = c.rbegin();
	std::cout << "\nМножество C:\n";
	for (std::set<int>::iterator i = c.begin(); i != c.end(); i++) {
		std::cout << *i << " ";
	}
	std::cout << "\n";
	system("pause");
	return 0;
}