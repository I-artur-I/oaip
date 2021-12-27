#include <iostream>

class Line {
protected:
	int l;
public:
	Line(int l) {
		this->l = l;
	}
	void show() {
		std::cout << "Линия:" << this->l << "\n";
	};
};

class Square : Line {
private:
	int s;
	int p;
public:
	Square(int l) : Line(l){
		this->s = l * l;
		this->p = l * 4;
	}
	void show(){
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
	void show() {
		Square::show();
		std::cout << "Обьем: " << this->v << "\n";
	}
};

int main() {
	system("chcp 1251");
	Cube cube(3);
	cube.show();

}