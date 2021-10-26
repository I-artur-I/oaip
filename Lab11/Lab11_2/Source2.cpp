#include <iostream>
#include <Windows.h>
#include <cmath>

int factorial(int num);
double f(double x);

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::cout << "[ x ] = ...\n____________________\n";
	for (double x = 3; x <= 7; x+=0.1) {
		std::cout << "[ " << x << " ] = " << f(x) << "\n";
	}
	system("pause");
	return 0;
}

int factorial(int num) {
	if (num <= 0) {
		return 0;
	}
	if (num == 1) {
		return 1;
	}
	return factorial(num - 1) * num;
}

double f(double x) {
	double sum = 0;
	for (int k = 0; k <= 6; k++) {
		sum += pow((-3), (k + 1)) * factorial(k - 1) / pow((x + 5), (k + 1));
	}
	return sum;
}