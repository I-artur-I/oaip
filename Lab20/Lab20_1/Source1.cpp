#include <iostream>
#include <regex>

int main() {
	system("chcp 1251");
	std::regex reg("\\ba[a-z0-9]*a\\b");
	char line[80];
	std::cout << "������� ������:\n";
	gets_s(line,80);
	
	if (std::regex_search(line,reg)) {
		std::cout << "������ ������������ �������\n";
	    std::cout << std::regex_replace(line, reg, "[$&]")<<"\n";
	}
	else {
		std::cout << "������ �� ������������ �������\n";
	}
	system("pause");
	return 0;
}