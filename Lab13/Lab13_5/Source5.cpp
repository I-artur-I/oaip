#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
	system("chcp 1251");

	char s[] = "So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy - chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
	char* p;
	char d[] = " .,!?;:()-";
	int max_len = 1;
	int max_num = 0;
	int word_num = 0;
	p = strtok(s, d);
	std::cout << "��� ������ �����:\n";
	while (p != NULL) {
		int word_len = strlen(p);
		word_num++;
		if (word_len > max_len) {
			max_len = word_len;
			max_num = word_num;
		}
		if (word_len % 2 == 0) {
			char* word = new char[word_len + 1];
		    strncpy(word, p, word_len + 1);
			std::cout << word  << "\n";
			delete[] word;
		}
		p = strtok(NULL, d);
	}
	std::cout << "\n���� ������� " << word_num << " ����\n";
	std::cout << "����� ������� ����� �������� " << max_num << " ������ � ����� " << max_len << " ��������\n";
	system("pause");
	return 0;
}