#include <iostream>

class Line {
protected:
	double l;
public:
	Line(double l) {
		this->l = l;
	}
	void show() {
		std::cout << "Линия:" << this->l << "\n";
	}

	Line operator+(double x) {
		this->l = this->l + x;
		return *this;
	}

	Line operator--(int) {
		this->l = this->l - 1;
		return *this;
	}
};

int main() {
	system("chcp 1251");
	Line line(1);
	line.show();
	line = line + 2.3;
	line.show();
	line--;
	line.show();

	system("pause");
	return 0;
}
