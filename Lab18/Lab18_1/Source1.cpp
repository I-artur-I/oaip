#include<iostream>
#include<math.h>
#include<stdlib.h>

struct Worker {
	char familia[50];
	char staff[50];
	int date;

};

void inline swap(Worker* a, Worker* b) {
	Worker buffer = *a;
	*a = *b;
	*b = buffer;
}

Worker* sortSelection_Name(Worker* w, int l) {
	for (int i = 0; i < l; i++) {
		int min = i;
		for (int j = i + 1; j < l; j++) {
			if (strcmp((w + min)->familia, (w + j)->familia) + 1) {
				min = j;
			}
		}
		swap(w + i, w + min);
	}
	return w;
}

Worker* sortShell_Name(Worker* w, int l) {
	for (int d = l / 2; d > 0; d = d / 2) {
		for (int j = 0; j < l - d; j++) {
			for (int k = j; k > -1; k = k - d) {
				if (strcmp((w + k)->familia, (w + k + d)->familia) + 1) {
					swap(w + k, w + k + d);
				}
				else {
					k = 0;
				}
			}
		}
	}
	return w;
}

Worker* sortSelection_Date(Worker* w, int l) {
	for (int i = 0; i < l; i++) {
		int min = i;
		for (int j = i + 1; j < l; j++) {
			if ((w + min)->date > (w + j)->date) {
				min = j;
			}
		}
		swap(w + i, w + min);
	}
	return w;
}

Worker* sortShell_Date(Worker* w, int l) {
	for (int d = l / 2; d > 0; d = d / 2) {
		for (int j = 0; j < l - d; j++) {
			for (int k = j; k > -1; k = k - d) {
				if ((w + k)->date > (w + k + d)->date) {
					swap(w + k, w + k + d);
				}
				else {
					k = 0;
				}
			}
		}
	}
	return w;
}

int binSearch_Date(Worker* w, int l, int date) {
	int low = 0;
	int high = l - 1;
	int mid = (low + high) / 2;
	while (high >= low) {
		if(w[mid].date == date){
			return mid;
		}
		else {
			if (date > w[mid].date) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
			mid = (low + high) / 2;
		}
	}
	return -1;
}

int binSearch_Name(Worker* w, int l, char* s) {
	int low = 0;
	int high = l - 1;
	int mid = (low + high) / 2;
	while (high >= low) {
		if (strcmp(w[mid].familia,s)) {
			return mid;
		}
		else {
			if (strcmp(s,w[mid].familia)==1) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
			mid = (low + high) / 2;
		}
	}
	
}

int search_Staff(Worker* w, int l, char* s) {
	for (int i = 0; i < l; i++) {
		if (strcmp(w[i].staff, s) == 0) {
			return i;
		}
	}
	return -1;
}

int main(){
	system("chcp 65001");
	int n = 4;
	Worker* workers = new Worker[n];

	for (int i = 0; i < n; i++) {
		std::cout << "Введите фамилию работника: ";
		std::cin >> workers[i].familia;
		std::cout << "Введите должность работника: ";
		std::cin >> workers[i].staff;
		std::cout << "Введите дату поступления работника: ";
		std::cin >> workers[i].date;
	}
	Worker* workers1 = new Worker[n];
	Worker* workers2 = new Worker[n];
	Worker* workers3 = new Worker[n];
	Worker* workers4 = new Worker[n];
	for (int i = 0; i < n;i++) {
		strcpy_s(workers1[i].familia, 50, workers[i].familia);
		strcpy_s(workers2[i].familia, 50, workers[i].familia);
		strcpy_s(workers3[i].familia, 50, workers[i].familia);
		strcpy_s(workers4[i].familia, 50, workers[i].familia);

		strcpy_s(workers1[i].staff, 50, workers[i].staff);
		strcpy_s(workers2[i].staff, 50, workers[i].staff);
		strcpy_s(workers3[i].staff, 50, workers[i].staff);
		strcpy_s(workers4[i].staff, 50, workers[i].staff);

		workers1[i].date = workers[i].date;
		workers2[i].date = workers[i].date;
		workers3[i].date = workers[i].date;
		workers4[i].date = workers[i].date;
	}

	sortSelection_Date(workers1,n);
	sortSelection_Name(workers2, n);
	sortShell_Date(workers3, n);
	sortShell_Name(workers4, n);

	std::cout << "\n\n=====Сортировка по дате выборочная=====\n\n";
	for (int i = 0; i < n; i++) {
		std::cout << "Фамилию работника: "<<workers1[i].familia << "\nДолжность работника: " << workers1[i].staff << "\nДата работника: " << workers1[i].date;
	}
	std::cout << "\n\n=====Сортировка по Имени выборочная=====\n\n";
	for (int i = 0; i < n; i++) {
		std::cout << "Фамилию работника: " << workers2[i].familia << "\nДолжность работника: " << workers2[i].staff << "\nДата работника: " << workers2[i].date;
	}
	std::cout << "\n\n=====Сортировка по Дате Шелла=====\n\n";
	for (int i = 0; i < n; i++) {
		std::cout << "Фамилию работника: " << workers3[i].familia << "\nДолжность работника: " << workers3[i].staff << "\nДата работника: " << workers3[i].date;
	}
	std::cout << "\n\n=====Сортировка по Имени Шелла=====\n\n";
	for (int i = 0; i < n; i++) {
		std::cout << "Фамилию работника: " << workers4[i].familia << "\nДолжность работника: " << workers4[i].staff << "\nДата работника: " << workers4[i].date;
	}

	char seName[50];
	char seStaff[50];
	int seDate;
	Worker se;
	std::cout << "\nВведите искомое Имя\n";
	std::cin >> seName;
	se = workers[binSearch_Name(workers2, n, seName)];
	std::cout << "Фамилию работника: " << se.familia << "\nДолжность работника: " << se.staff << "\nДата работника: " << se.date;
	std::cout << "\nВведите искомую должность\n";
	std::cin >> seStaff;
	se = workers[search_Staff(workers, n, seStaff)];
	std::cout << "Фамилию работника: " << se.familia << "\nДолжность работника: " << se.staff << "\nДата работника: " << se.date;
	std::cout << "\nВведите искомую дату\n";
	std::cin >> seDate;
	se = workers[binSearch_Date(workers2, n, seDate)];
	std::cout << "Фамилию работника: " << se.familia << "\nДолжность работника: " << se.staff << "\nДата работника: " << se.date;

	system("pause");
	return 0;
}