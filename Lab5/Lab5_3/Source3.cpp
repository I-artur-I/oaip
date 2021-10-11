#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double x, a, b, n, h;
	std::cout << "¬ведите значение A\n";
	std::cin >> a;
	std::cout << "¬ведите значение B\n";
	std::cin >> b;
	std::cout << "¬ведите значение N\n";
	std::cin >> n;
	std::cout << "¬ведите значение H\n";
	std::cin >> h;
	for (x=a; x < b; x += h) {
		double y, s = 0;
		for (int k = 1; k <= n; k++) {
			s += pow(-1, k) * cos(k * x) / pow(k, 2);
		}
		y = 0.25 * (pow(x, 2) - pow(3.14, 2) / 3);
		std::cout << " Y(x)=" << y << "\t\tS(x)=" << s << "\t\tY(x) - S(x)=" << y - s <<"\n";
	}

	system("pause");
	return 0;
}