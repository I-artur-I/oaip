#pragma once
#include<iostream>

class Notebook {
private:
	int index;
	double d;
	char type;
	bool intel;
	char model[25];
	int key[3];
public:

	Notebook() {
		this->index = 0;
		this->d = 15;
		this->type = 'A';
		this->intel = true;
		memcpy(this->model, "SUPER-PC", 25);
		this->key[0] = 0;
		this->key[1] = 0;
		this->key[2] = 0;
		std::cout << "[Вызов Notebook::Notebook()]\n";
	}

	Notebook(int index, double d, char type, bool p, char model[25], int key0, int key1, int key2) {
		this->index = index;
		this->d = d;
		this->type = type;
		this->intel = p;
		memcpy(this->model, model, 25);
		this->key[0] = key0;
		this->key[1] = key1;
		this->key[2] = key2;
		std::cout << "[Вызов Notebook::Notebook(...)]\n";
	}

	~Notebook() {
		std::cout << "[Вызов Notebook::~Notebook()]\n";
	}

	void print() {
		std::cout << "Информация об ноутбуке:\n\tНомер модели " << this->index
			<< "\n\tДиагональ " << this->d
			<< "\n\tТип " << this->type
			<< "\n\tПроцессор Интел " << this->intel
			<< "\n\tМодель " << this->model
			<< "\n\tКлючи защиты " << this->key[0] << " " << this->key[1] << " " << this->key[2] << "\n";
	}

	void checkD() {
		if (this->d == 20 ) {
			std::cout << "Разрешение экрана VGA\n";
		}
		else {
			if (this->d == 45 ) {
				std::cout << "Разрешение экрана XGA\n";
			}
			else {
				if (this->d == 55 ) {
					std::cout << "Разрешение экрана HD\n";
				}
				else {
					if (this->d == 65 ) {
						std::cout << "Разрешение экрана Full HD\n";
					}
					else {
						if (this->d == 75 ) {
							std::cout << "Разрешение экрана 2K\n";
						}
						else {
							if (this->d == 83 ) {
								std::cout << "Разрешение экрана QuardHD\n";
							}
							else {
								if (this->d == 89 ) {
									std::cout << "Разрешение экрана 3K\n";
								}
								else {
									if (this->d == 95 ) {
										std::cout << "Разрешение экрана 4K\n";
									}
									else {
										std::cout << "Разрешение экрана не распознано\n";
									}
								}
							}
						}
					}
				}
			}
		}
	}

	void setIndex(int index) {
		this->index = index;
	}

	void setD(double d) {
		this->d = d;
	}

	void setType(char type) {
		this->type = type;
	}

	void setIntel(bool p) {
		this->intel = p;
	}

	void setModel(char model[25]) {
		memcpy(this->model, model, 25);
	}

	void setKey(int key0, int key1, int key2) {
		this->key[0] = key0;
		this->key[1] = key1;
		this->key[2] = key2;
	}

	int getIndex() {
		return this->index;
	}

	double getD() {
		return this->d;
	}

	char getType() {
		return this->type;
	}

	bool isIntel() {
		return this->intel;
	}

	char* getModel() {
		return this->model;
	}

	int* getKey() {
		return this->key;
	}
};

