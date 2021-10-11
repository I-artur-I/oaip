#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	const double a = 0.1, b = 1, n=10;	
	double x = a;
	for (; x < b; x+=(b-a)/n) {
		double s=1;
		for (int i = 1; i <= n; i++) {
			double factorial = 1;
			for (int j = 1; j <= i; j++) {
				factorial = factorial * j;
			}
			s += pow((2 * x),i) / factorial;
		}
		std::cout << " x=" << x << "\t\tY(x)=" << exp(2 * x) << "\tS(x)=" << s << "\n";
	}

	system("pause");
	return 0;
}