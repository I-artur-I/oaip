#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int i;

	std::cout << "Введите год открытия спутника \n";
	std::cin >> i;
	while (i > 0) {
		switch (i) {
		case 1610:
			std::cout << "Каллиста - Юпитер \n";
			std::cout << "Ио - Юпитер \n";
			std::cout << "Европа - Юпитер \n";
			std::cout << "Ганимеда - Юпитер \n";
			break;
		case 1655:
			std::cout << "Титан - Сатурн \n";
			break;
		case 1671:
			std::cout << "Япет - Сатурн \n";
			break;
		case 1672:
			std::cout << "Рея - Сатурн \n";
			break;
		case 1684:
			std::cout << "Тефия - Сатурн \n";
			std::cout << "Диона - Сатурн \n";
			break;
		case 1787:
			std::cout << "Титания - Уран\n";
			std::cout << "Оберон - Уран\n";
			break;
		case 1846:
			std::cout << "Тритон - Нептун\n";
			break;
		case 1851:
			std::cout << "Умбриэль - Уран\n";
			std::cout << "Ариэль - Уран\n";
			break;
		case 1877:
			std::cout << "Фобос - Марс\n";
			std::cout << "Деймос - Марс\n";
			break;
		case 1974:
			std::cout << "Леда - Юпитер\n";
			break;
		case 1978:
			std::cout << "Хирон - Плутон\n";
			break;
		}
		i--;
	}
	
	system("pause");
	return 0;
}