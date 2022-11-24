#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;


class Person {
	string name;
	int age = 0;
	string pol;
	long long ph_num;
public:
	Person() {
		name = "О";
		age = 20;
		pol = "м";
		ph_num = 0;
	}
	Person(string _name, int _age, string _pol, long long _ph_num) {
		name = _name;
		if (_age > 0)
			age = _age;
		else {
			cout << "error" << endl;
			cout << age << endl;
			age = 20;
		}

		pol = _pol;
		ph_num = _ph_num;
	}
	~Person() {

	}
	void Setname(string _name) {
		name = _name;
	}
	void Setage(int _age) {
		if (_age > 0)
			age = _age;
		else {
			cout << "Error" << endl;
			name = 20;
		}
	}
	void Setpol(string _pol) {
		pol = _pol;
	}
	void Setph_num(long long _ph_num) {
		ph_num = _ph_num;
	}
	string Getname() {
		return name;
	}
	int Getage() {
		return age;
	}
	string Getpol() {
		return pol;
	}
	long long Getph_num() {
		return ph_num;
	}
	void Print() {
		cout << setw(10) << name << setw(10) << age << setw(10) << pol << setw(15) << ph_num << endl;
	}

};


void Print_p(Person* tep) {
	cout << setw(10) << tep->Getname() << setw(10) << tep->Getage() << setw(10) << tep->Getpol() << setw(15) << tep->Getph_num() << endl;
}

int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int ch;
	int min;
	int sec;
	long long ph = 0;
	string name1 = " ";
	int vibor;
	int vibor1 = 0;

	Person p1("Андрей", 25, "м", 89998207939); 	Person p2("София", 12, "м", 84956742389);	Person p3("Николай", 46, "ж", 89265448921); 	Person p4("Сирофим", 23, "м", 84951234567); 	Person p5("Евгения", 98, "ж", 84591230912);
	Person group_p[5] = { p1, p2, p3, p4, p5 };


	do {
		cout << "Что хотите сделать?" << endl << "0 - выход " << endl << "1 - вывести всех людей" << endl << "2 - изменить имя " << endl << "3 - изменить пол" << endl << "4 -изменить номер телефона " << endl << "5 - вывести отредактированный список" << endl;
		cout << "введите знчение: ";
		cin >> vibor;
		switch (vibor) {
		case 0:
			system("cls");
			cout << "выход" << endl;
			break;
		case 1:
			system("cls");
			cout << setw(10) << "имя" << setw(10) << "возраст" << setw(10) << "пол" << setw(15) << "номер" << endl;
			for(int i = 0; i < 5; i++)
				Print_p(&group_p[i]);
			break;
		case 2:
			system("cls");
			cout << "кому вы хоите изменить имя ?" << endl << "введите номер человека (например 1): ";
			cin >> vibor1;
			switch (vibor1) {
			case 0:
				break;
			case 1:
				system("cls");
				cout << "введите имя которое хоите:";
				cin >> name1;
				p1.Setname(name1);
				cout << "сделано" << endl;
				break;
			case 2:
				system("cls");
				cout << "введите имя которое хоите: ";
				cin >> name1;
				p2.Setname(name1);
				cout << "сделано" << endl;
				break;
			case 3:
				system("cls");
				cout << "введите имя которое хоите: ";
				cin >> name1;
				p3.Setname(name1);
				cout << "сделано" << endl;
				break;
			case 4:
				system("cls");
				cout << "введите имя которое хоите: ";
				cin >> name1;
				p4.Setname(name1);
				cout << "сделано" << endl;
				break;
			case 5:
				system("cls");
				cout << "введите имя которое хоите: ";
				cin >> name1;
				p5.Setname(name1);
				cout << "сделано" << endl;
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "кому вы хоите изменить пол ?" << endl << "введите номер человека (например 1): ";
			cin >> vibor1;
			switch (vibor1) {
			case 1:
				system("cls");
				cout << "введите пол который хоите: ";
				cin >> name1;
				p1.Setpol(name1);
				cout << "сделано" << endl;
				break;
			case 2:
				system("cls");
				cout << "введите пол который хоите: ";
				cin >> name1;
				p2.Setpol(name1);
				cout << "сделано" << endl;
				break;
			case 3:
				system("cls");
				cout << "введите пол который хоите: ";
				cin >> name1;
				p3.Setpol(name1);
				cout << "сделано" << endl;
				break;
			case 4:
				system("cls");
				cout << "введите пол который хоите: ";
				cin >> name1;
				p4.Setpol(name1);
				cout << "сделано" << endl;
				break;
			case 5:
				system("cls");
				cout << "введите пол котороый хоите: ";
				cin >> name1;
				p5.Setpol(name1);
				cout << "сделано" << endl;
				break;
			}
			break;
		case 4:
			system("cls");
			cout << "кому вы хоите изменить номер телефона ?" << endl << "введите номер человека (например 1): ";
			cin >> vibor1;
			switch (vibor1) {
			case 1:
				system("cls");
				cout << "введите номер которое хоите: ";
				cin >> ph;
				p1.Setph_num(ph);
				cout << "сделано" << endl;
				break;
			case 2:
				system("cls");
				cout << "введите номер которое хоите: ";
				cin >> ph;
				p2.Setph_num(ph);
				cout << "сделано" << endl;
				break;
			case 3:
				system("cls");
				cout << "введите номер которое хоите: ";
				cin >> ph;
				p3.Setph_num(ph);
				cout << "сделано" << endl;
				break;
			case 4:
				system("cls");
				cout << "введите номер которое хоите: ";
				cin >> ph;
				p4.Setph_num(ph);
				cout << "сделано" << endl;
				break;
			case 5:
				system("cls");
				cout << "введите номер которое хоите: ";
				cin >> ph;
				p5.Setph_num(ph);
				cout << "сделано" << endl;
				break;
			
			}
			break;
		case 5:
			system("cls");
			p1.Print();
			p2.Print();
			p3.Print();
			p4.Print();
			p5.Print();
			
			break;
		}
		Sleep(1500);
		system("cls");
	} while (vibor != 0);


	return 0;
}
