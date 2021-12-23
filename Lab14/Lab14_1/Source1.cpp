#include <iostream>
#include <math.h>

double zadanie2(int n) {
	if (n == 1) {
		return pow(3, 0.5);
	}
	return pow(3 + zadanie2(n - 1), 0.5);
}

double zadanie3(int i, int n) {//i должен вызываться с i = 1;
	if (i == n) {
		return pow(i,0.5);
	}
	return pow(zadanie3(i+1,n) + i,0.5);
}

double zadanie33( int n) {//i должен вызываться с i = 1;
	double res = 0;
	for (int i = n; i > 0; i--) {
		res = pow(res + i, 0.5);
	}
	return res;
}



int main() {
	system("chcp 1251");
	int n = 10;
	std::cout << "\nN=10\nЗадание 2\n" << zadanie2(n);
	
	std::cout <<"\n\nЗадание 3\nВариант 1: " << zadanie33(n) << "\nВариант 2: " << zadanie3(1, n)<<"\n";
	system("pause");
}