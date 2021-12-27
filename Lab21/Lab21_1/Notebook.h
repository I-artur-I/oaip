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
		std::cout << "[����� Notebook::Notebook()]\n";
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
		std::cout << "[����� Notebook::Notebook(...)]\n";
	}

	~Notebook() {
		std::cout << "[����� Notebook::~Notebook()]\n";
	}

	void print() {
		std::cout << "���������� �� ��������:\n\t����� ������ " << this->index
			<< "\n\t��������� " << this->d
			<< "\n\t��� " << this->type
			<< "\n\t��������� ����� " << this->intel
			<< "\n\t������ " << this->model
			<< "\n\t����� ������ " << this->key[0] << " " << this->key[1] << " " << this->key[2] << "\n";
	}

	void checkD() {
		if (this->d == 20 ) {
			std::cout << "���������� ������ VGA\n";
		}
		else {
			if (this->d == 45 ) {
				std::cout << "���������� ������ XGA\n";
			}
			else {
				if (this->d == 55 ) {
					std::cout << "���������� ������ HD\n";
				}
				else {
					if (this->d == 65 ) {
						std::cout << "���������� ������ Full HD\n";
					}
					else {
						if (this->d == 75 ) {
							std::cout << "���������� ������ 2K\n";
						}
						else {
							if (this->d == 83 ) {
								std::cout << "���������� ������ QuardHD\n";
							}
							else {
								if (this->d == 89 ) {
									std::cout << "���������� ������ 3K\n";
								}
								else {
									if (this->d == 95 ) {
										std::cout << "���������� ������ 4K\n";
									}
									else {
										std::cout << "���������� ������ �� ����������\n";
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

