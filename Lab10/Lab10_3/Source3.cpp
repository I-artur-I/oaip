#include <iostream>
#include <Windows.h>
#include <cmath>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	//65-90
	const int l = 7, ll = 5, lll = 8;
	char m[l][ll][lll];
	for (int i = 0; i < l; i++) {
		for (int ii = 0; ii < ll; ii++) {
			for (int iii = 0; iii < lll; iii++) {
				m[i][ii][iii] = 65 + rand() % 26;
			}
		}
	}
	for (int i = 0; i < l; i++) {
		for (int ii = 0; ii < ll; ii++) {
			for (int iii = 0; iii < lll; iii++) {
				if (m[i][ii][iii] == 'W') {
					std::cout << "[" << i << "][" << ii << "]";
					for (iii = 0; iii < lll; iii++) {
						std::cout << m[i][ii][iii];
					}
					std::cout << "\n";
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}