#include <iostream>
#include <Windows.h>
#include <cmath>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    const int l = 10;
    int m[l][l] = {
        { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
        { -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
        { -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
        { 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
        { -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
        { -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
        { 88, -61, 0, -64, -83, 97, 0, 90, 15, 8},
        { -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
        { 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
        { 78, 60, -79, -18, 30, -13, -34, -92, 1, -38}
    };
    int stol = 0;
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < l; j++) {
            if (!m[j][i]) {
                stol++;
                break;
            }
        }
    }
    int x[l];
    for (int i = 0; i < l; i++) {
        x[i] = 0;
        for (int j = 0; j < l; j++) {
            if (m[i][j] > 0 && m[i][j] % 2 == 0) {
                x[i] += m[i][j];
            }
        }
    }
    for (int i = 0; i < l; i++) {
        int max = i;
        for (int j = i; j < l; j++) {
            if (x[max] < x[j]) {
                max = j;
            }
        }
        int buf ;
        buf = x[i];
        x[i] = x[max];
        x[max] = buf;
        for (int j = 0; j < l; j++) {
            buf = m[i][j];
            m[i][j] = m[max][j];
            m[max][j] = buf;
        }
    }
    for (int i = 0; i < l; i++) {
        std::cout << "[" << x[i] << "]";
        for (int j = 0; j < l; j++) {
            std::cout << " " << m[i][j] ;
        }
        std::cout << "\n";
    }
    std::cout << stol;
	system("pause");
	return 0;
}