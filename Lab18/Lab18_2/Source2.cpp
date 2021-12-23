#include <iostream>

struct Avto
{
	int num;
};

void inline swap(int* a, int* b) {
	int buffer = *a;
	*a = *b;
	*b = buffer;
}
void inline swap(double* a, double* b) {
	double buffer = *a;
	*a = *b;
	*b = buffer;
}
void inline swap(Avto* a, Avto* b) {
	Avto buffer = *a;
	*a = *b;
	*b = buffer;
}

double* sortSelection_l(double* m, int l) {
	for (int i = 0; i < l; i++) {
		int min = i;
		for (int j = i + 1; j < l; j++) {
			if (m[min] < m[j]) {
				min = j;
			}
		}
		swap(m + i, m + min);
	}
	return m;
}

int* sortSelection_l(int* m, int l) {
	for (int i = 0; i < l; i++) {
		int min = i;
		for (int j = i + 1; j < l; j++) {
			if (m[min] < m[j]) {
				min = j;
			}
		}
		swap(m + i, m + min);
	}
	return m;
}

double* sortShell_h(double* m, int l) {
	for (int d = l / 2; d > 0; d = d / 2) {
		for (int j = 0; j < l - d; j++) {
			for (int k = j; k > -1; k = k - d) {
				if (m[k] > m[k + d]) {
					swap(m + k, m + k + d);
				}
				else {
					k = 0;
				}
			}
		}
	}
	return m;
}

Avto* sortQuick_h(Avto* a, int left, int right) {
	int leftArrow = left;
	int rightArrow = right;
	int pivot = a[(left + right) / 2].num;
	do {
		while (a[leftArrow].num < pivot) {
			leftArrow++;
		}
		while (a[rightArrow].num > pivot) {
			rightArrow--;
		}
		if (leftArrow <= rightArrow) {
			swap(a + leftArrow, a + rightArrow);
			leftArrow++;
			rightArrow--;
		}

	} while (leftArrow <= rightArrow);
	if (left < rightArrow) {
		sortQuick_h(a, left, rightArrow);
	}
	if (right > leftArrow) {
		sortQuick_h(a, right, leftArrow);
	}
	return a;
}

int* massInt;
double* massDou;
double** md;
Avto* avtos;

int main() {
	system("chcp 65001");
	int l;
	int type = 0;
	int l1, l2;
	int ls;
	int sw = 0;
	bool f1 = false,f2 = false,f3 = false;
	std::cout << "!!!Внимание, правильно выбирайте последовательность пунктов меню!!!";
	while (sw != 10) {
		std::cout << "\n\nВыберите действие:\n1 - инициализировать одномерный массив\n2 - инициализировать двухмерный массив\n3 - инициализировать массив структур\n4 - отсортировать первый массив\n5 - отсортировать двухмерный массив\n6 - отсортировать массив структур\n7 - вывести первый массив\n8 - вывести двухмеррный массив\n9 - ввывести массив структур\n10 - закончить программу и удалить все массивы\n";
		std::cin >> sw;
		switch (sw) {
		case 1:
			std::cout << "Введите размер массива\n";
			std::cin >> l;
			while (!(type == 1 || type == 2)) {
				std::cout << "Выберите тип массива\n1 - Int\n2 - Double\n";
				std::cin >> type;
			}
			massInt = new int[l];
			massDou = new double[l];
			std::cout << "Введите элементы массива\n";
			for (int i = 0; i < l; i++) {
				if (type == 1) {
					std::cin >> massInt[i];
				}
				if (type == 2) {
					std::cin >> massDou[i];
				}
			}
			f1 = true;
			break;

		case 2:
			std::cout << "Введите размер двухмерного массив\n";
			std::cin >> l1;
			std::cin >> l2;
			md = new double* [l1];
			..//////////////////
			for (int i = 0; i < l1; i++) {
				md[i] = new double[l2];
			}
			std::cout << "Введите элементы массива\n";
			for (int i = 0; i < l1; i++) {
				for (int j = 0; j < l2; j++) {
					std::cout << "m[" << i << "][" << j << "]=";
					std::cin >> md[i][j];
				}
			}
			f2 = true;
			break;

		case 3:
			std::cout << "Введите размер массива структур\n";
			std::cin >> ls;
			avtos = new Avto[ls];
			std::cout << "Введите номера машин\n";
			for (int i = 0; i < ls; i++) {
				std::cin >> avtos[i].num;
			}
			f3 = true;
			break;

		case 4:
			if (f1) {
				if (type == 1) {
					sortSelection_l(massInt, l);
				}
				if (type == 2) {
					sortSelection_l(massDou, l);
				}
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}
			break;

		case 5:
			if (f2) {
				for (int i = 0; i < l1; i++) {
					sortShell_h(md[i], l2);
				}
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}

			break;

		case 6:
			if (f3) {
				sortQuick_h(avtos, 0, ls - 1);
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}

			break;

		case 7:
			if (f1) {
				for (int i = 0; i < l; i++) {
					if (type == 1) {
						std::cout << massInt[i] << " ";
					}
					if (type == 2) {
						std::cout << massDou[i] << " ";
					}
				}
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}

			break;

		case 8:
			if (f2) {
				for (int i = 0; i < l1; i++) {
					for (int j = 0; j < l2; j++) {
						std::cout << md[i][j] << " ";
					}
					std::cout << "\n";
				}
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}

			break;

		case 9:
			if (f3) {
				for (int i = 0; i < ls; i++) {
					std::cout << "Машина с номером :" << avtos[i].num << "\n";
				}
			}
			else {
				std::cout << "Проинициализируйте!!!\n";
			}

			break;

		case 10:
			if (f2) {
				for (int i = 0; i < l1; i++) {
					delete[] md[i];
				}
				delete[] md;
			}
			if (f1) {
				delete[] massInt;
				delete[] massDou;
			}
			if (f3) {
				delete[] avtos;
			}
			break;
		default:
			std::cout << "Введите еще раз\n";
			break;
		}
	}
}