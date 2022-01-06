#include <iostream>
#include <regex>

int main() {
	system("chcp 1251");
	std::regex reg("\\ba[a-z0-9]*a\\b");
	char line[80];
	std::cout << "Введите строку:\n";
	gets_s(line,80);
	
	if (std::regex_search(line,reg)) {
		std::cout << "Строка удолетворяет условию\n";
	    std::cout << std::regex_replace(line, reg, "[$&]")<<"\n";
	}
	else {
		std::cout << "Строка не удолетворяет условию\n";
	}
	system("pause");
	return 0;
}