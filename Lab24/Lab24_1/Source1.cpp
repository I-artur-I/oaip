#include <iostream>

class Homosapiens {
public:
	virtual void doing() = 0;
};

class Person : public Homosapiens{
protected:
	char name[25];
	int age;
public:
	Person(int age, char name[25]){
		this->age = age;
		memcpy(this->name, name, 25);
	}

	void doing() override {
		std::cout << this->getName() << " отдыхает\n";
	}

	void setAge(int age) {
		this->age = age;
	}

	void setName(char name[25]) {
		memcpy(this->name, name, 25);
	}

	int getAge() {
		return this->age;
	}

	char* getName() {
		return this->name;
	}
};

class Employee : public Person {
protected:
	char staff[30];
	double money;
public:
	Employee(int age, char name[25], char staff[30], double money) : Person(age,name) {
		memcpy(this->staff, staff, 25);
		this->money = money;
	}

	void doing() override {
		std::cout << this->getName() <<" работает\n";
	}

	void setStaff(char staff[30]){
		memcpy(this->staff, staff, 25);
	}
	
	void setMoney(double money) {
		this->money = money;
	}

	char* getStaff() {
		return this->staff;
	}

	double getMoney(double okl) {
		return (this->money + (okl*this->money/100.0));
	}
};

int main() {
	system("chcp 1251");
	Homosapiens** homosapiens = new Homosapiens*[2];
	char c1[25] = "Ivan";
	homosapiens[0] = new Person(5, c1);
	char c2[25] = "Vlad";
	char c3[30] = "Director";
	homosapiens[1] = new Employee(18, c2, c3, 45.5);
	for (int i = 0; i < 2; i++) {
		homosapiens[i]->doing();
	}
}