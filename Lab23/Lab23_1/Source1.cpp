#include <iostream>

class Line {
protected:
	int l;
public:
	Line(int l) {
		this->l = l;
	}
	virtual void show() {
		std::cout << "Линия:" << this->l << "\n";
	}
};

class Square : Line {
private:
	int s;
	int p;
public:
	Square(int l) : Line(l) {
		this->s = l * l;
		this->p = l * 4;
	}
	void show() override {
		Line::show();
		std::cout << "Периметр: " << this->p << "\n";
		std::cout << "Площадь: " << this->s << "\n";
	}
};

class Cube : Square {
private:
	int v;
public:
	Cube(int l) : Square(l) {
		this->v = l * l * l;
	}
	void show() override {
		Square::show();
		std::cout << "Обьем: " << this->v << "\n";
	}
};

int main() {
	system("chcp 1251");

	Cube cube(3);
	cube.show();
	Cube* cube1 = new Cube(5);
	cube1->show();
	delete cube1;
	
	Square square(2);
	square.show();
	Square* square1 = new Square(7);
	square1->show();
	delete square1;

	Line line(4);
	line.show();
	Line* line1 = new Line(6);
	line1->show();
	delete line1;
	
	const int n = 5;
	Cube* cube2[n];
	for (int i = 0; i < n; i ++) {
		int k;
		std::cout << "Введите длинну линии:\n";
		std::cin >> k;
		cube2[i] = new Cube(k);
	}
	std::cout << "\nПолученный массив:\n";
	for (int i = 0; i < n; i++) {
		cube2[i]->show();
		delete cube2[i];
	}

	int nn;
	std::cout << "\nВведите размер динамического массива: \n";
	std::cin >> nn;

	Cube** cube3 = new Cube*[nn];
	for (int i = 0; i < nn; i++) {
		int k;
		std::cout << "Введите длинну линии:";
		std::cin >> k;
		cube3[i] = new Cube(k);
	}
	std::cout << "\nПолученный массив:\n";
	for (int i = 0; i < nn; i++) {
		cube3[i]->show();
		delete cube3[i];
	}
	delete[] cube3;
}