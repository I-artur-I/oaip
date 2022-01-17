#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

struct Bisnesman
{
	int age;
	double money;
	char typeMoney;
	bool isLive;
	int phone[2];
};


void printBisnesman(Bisnesman* bisnesman) {
	std::cout << bisnesman->age << " | "
		<< bisnesman->money << " | "
		<< bisnesman->typeMoney << " | "
		<< bisnesman->isLive << " | "
		<< bisnesman->phone[0] << "|"
		<< bisnesman->phone[1] << "\n";
}

void scanBisnesman(Bisnesman* bisnesman) {
	std::cout << "aâåäèòå âîçğàñò: ";
	std::cin >> bisnesman->age;
	std::cout << "Ââåäèòå êàïèòàë: ";
	std::cin >> bisnesman->money;
	std::cout << "Ââåäèòå âàëşòó êàïèòàëà(1 ñèìâîë): ";
	std::cin >> bisnesman->typeMoney;
	std::cout << "Æèâ ëè(0 - íåò, 1 - äà): ";
	std::cin >> bisnesman->isLive;
	std::cout << "Ââåäèòå íîìåğ ïåğâîãî òåëåôîíà: ";
	std::cin >> bisnesman->phone[0];
	std::cout << "Ââåäèòå íîìåğ âòîğîãî òåëåôîíà: ";
	std::cin >> bisnesman->phone[1];
}

int main() {
	system("chcp 1251");
	int k = 0;
	do {
		std::cout << "1 - Ââåñòè òåêñò â ôàéë\n2 - Âûâåñòè òåêñò èç ôàéëû\n3 - Ââåñòè ìàññèâ â ôàéë\n4 - Âûâåñòè ìàññèâ èç ôàéëû\n5 - Äîáàâèòü ñòğóêòóğó\n6 - Âûâåñòè ñòğóêòóğû\n7 - Äîáàâèòü ñòğóêòóğó(bin)\n8 - Âûâåñòè ñòğóêòóğû(bin)\n9 - Çàêîí÷èòü ïğîãğàììó\n";
		std::cout << "Âûáåğèòå ìåíş: ";
		std::cin >> k;
		switch (k)
		{
		case 1:
		{
			char s[100];
			std::cin.ignore();
			std::cout << "\nÂâåäèòå òåêñò(100 ñèìâîëîâ):\n";
			std::cin.getline(s,100);
			FILE* file = fopen("./ChernyakovVlad.txt", "wt");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			for (int i = 0; s[i] != NULL; i++) {
				fputc(s[i],file);
			}
			fclose(file);
		}
			break;
		case 2:
		{
			std::cout << "\n";
			FILE* file = fopen("./ChernyakovVlad.txt", "rt");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			char c = fgetc(file);
			while (!feof(file)) {
				std::cout << c;
				c = fgetc(file);
			}
			fclose(file);
			std::cout << "\n\n";
		}
			break;
		case 3:
		{
			std::cout << "\nÂâåäèòå ğàçìåğ ìàññèâà:\n";
			int n;
			std::cin >> n;
			FILE* file = fopen("./ChernyakovVlad0.txt", "wt");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			std::cout << "Ââåäèòå ìàññèâ:\n";
			for (int i = 0; i < n; i++) {
				int buf;
				std::cin >> buf;
				fprintf_s(file,"%d!",buf);
			}
 			fclose(file);
			std::cout << "\n\n";
		}
			break;
		case 4:
		{
			std::cout << "\nİëåìåíòû ìàññèâà:\n";
			FILE* file = fopen("./ChernyakovVlad0.txt", "rt");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			int x=0;
			fscanf_s(file, "%d!", &x);
			while (!feof(file)) {
				std::cout << x << " ";
				fscanf_s(file,"%d!",&x);
			}
			fclose(file);
			std::cout << "\n\n";
		}
			break;
		case 5:
		{
			Bisnesman bisnesman = { 0,0.0,'r',0,23,23 };
			scanBisnesman(&bisnesman);
			FILE* file = fopen("./ChernyakovVlad1.txt", "at");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			
			fprintf_s(file, "%d|%lf|%c|%d|%d|%d|", bisnesman.age, bisnesman.money, bisnesman.typeMoney, bisnesman.isLive, bisnesman.phone[0], bisnesman.phone[1]);
			fclose(file);
			std::cout << "\n\n";
			
		}
		break;
		case 6:
		{
			Bisnesman bisnesman = {0,0.0,'r',0,23,23};
			std::cout << "\nÑòğóêòóğû:\n";
			FILE* file = fopen("./ChernyakovVlad1.txt", "rt");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			
			fscanf_s(file, "%d|%lf|%c|%d|%d|%d|", &(bisnesman.age), &(bisnesman.money), &(bisnesman.typeMoney), &(bisnesman.isLive), &(bisnesman.phone[0]), &(bisnesman.phone[1]));
			while (!feof(file)) {
				printBisnesman(&bisnesman);
				fscanf_s(file, "%d|%lf|%c|%d|%d|%d|", &(bisnesman.age), &(bisnesman.money), &(bisnesman.typeMoney), &(bisnesman.isLive), &(bisnesman.phone[0]), &(bisnesman.phone[1]));
			}
			fclose(file);
			std::cout << "\n\n";
		}
		break;
		case 7:
		{
			Bisnesman bisnesman = { 0,0.0,'\0',0,0,0 };
			scanBisnesman(&bisnesman);
			FILE* file = fopen("./ChernyakovVlad2.bin", "ab");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}

			fwrite(&bisnesman, sizeof(Bisnesman), 1, file);
			fclose(file);
			fclose(file);
			std::cout << "\n\n";

		}
		break;
		case 8:
		{
			Bisnesman bisnesman = {0,0.0,'\0',0,0,0};
			std::cout << "\nÑòğóêòóğû:\n";
			FILE* file = fopen("./ChernyakovVlad2.bin", "rb");
			if (file == NULL) {
				std::cout << "Îøèáêà ôàéëà\n";
				break;
			}
			fread(&bisnesman, sizeof(Bisnesman),1,file);
			while (!feof(file)) {
				printBisnesman(&bisnesman);
				fread(&bisnesman, sizeof(Bisnesman), 1, file);
			}
			fclose(file);
			std::cout << "\n\n";
		}
		break;
		case 9:
 			system("pause");
			break;
		default:
			std::cout << "Âûáğàííûé ïóíêò ìåíş íå ğàñïîçíàí";
			break;
		}
	} while (k != 9);
	return 0;
}
