#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

enum ConsoleColor {
	Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray,
	LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White
};

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}


void load() {
	for (int i = 0; i < 5; i++) {
		SetColor(8 + i, Black);
		GotoXY(59, 12);
		cout << "|";
		Sleep(350);
		GotoXY(59, 12);
		cout << "/";
		Sleep(350);
		GotoXY(59, 12);
		cout << "-";
		Sleep(350);
	}
}

void sotring(int sizep, int kar, int par[]) {
	while (sizep--) {
		bool swapped = false;
		for (int i = 0; i < kar; i++)
			if (par[i] > par[i + 1]) {
				swap(par[i], par[i + 1]);
				swapped = true;
			}
		if (swapped == false)
			break;
	}
}

void poisk(int poi, int kar, int par[]) {
	cout << "введите число которое хотите найти: ";
	cin >> poi;
	for (int i = 0; i < kar; i++)
		if (poi == par[i])
			cout << par[i] << endl;
	cout << "если молчит значит нет такого" << endl;
}

void avgp(int avg, int kar, int par[], int parav[]) {
	for (int i = 0; i < kar; i++)
		avg += par[i];
	avg /= kar;
	for (int i = 0; i < kar; i++) {
		if (par[i] < avg)
			parav[i] = par[i];
		else
			parav[i] = 0; //если число не подходит, то число равно 0
	}
	cout << "если число равно 0, то число больше среднего арефметического" << endl;
}

int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int kar;
	int prd;
	int prp;
	int av;
	double avg = 0;
	int vibor;
	int poi = 0;
	do {
		cout << "введите размер массива: ";
		cin >> kar;
		system("cls");
	} while (kar < 1);
	prd = kar;
	prp = kar;
	av = kar;
	int *par = new int[kar];
	int *par2 = new int[prd];
	int *par5 = new int[prp];
	int *parav = new int[av];
	for (int i = 0; i < kar; i++)
		par[i] = rand() % 50;
	int sizep = sizeof(par);
	do {
		SetColor(Yellow, Black);
		cout << "Что вы хотите сделать?" << endl << "0 - выход" << endl << "1 - поиск числа" << endl << "2 - сортировка " << endl << "3 - запись в массив чисел %2" << endl << "4 - запись в массив чисел %5" << endl << "5 - отобрать в массив числа меньшие среднего" << endl << "6 - вывод масссива 1" << endl << "7 - вывод массива %2" << endl << "8 - вывод массива %5" << endl << " 9 - вывод массива чисел меньшие среднего" << endl;
		cout << "введите ваш выбор: ";
		cin >> vibor;
		switch (vibor) {
		case 0:
			system("cls");
			GotoXY(53, 12);
			cout << "выход" << endl;
			//load();
			break;
		case 1:
			system("cls");
			poisk(poi, kar, par);
			break;
		case 2:
			system("cls");
			sotring(sizep, kar, par);
			break;
		case 3:
			system("cls");
			for (int i = 0; i < kar; i++) 
				par2[i] = par[i] % 2;
			break;
		case 4:
			system("cls");
			for (int i = 0; i < kar; i++)
				par5[i] = par[i] % 5;
			break;
		case 5:
			system("cls");
			avgp(avg, kar, par, parav);
			break;
		case 6:
			system("cls");
			for (int i = 0; i < kar; i++)
				cout << par[i] << endl;
			break;
		case 7:
			system("cls");
			for (int i = 0; i < kar; i++)
				cout << par2[i] << endl;
			break;
		case 8:
			system("cls");
			for (int i = 0; i < kar; i++)
				cout << par5[i] << endl;
			break;
		case 9:
			system("cls");
			for (int i = 0; i < kar; i++)
				cout << parav[i] << endl;
			break;
		}
		Sleep(1500);
		system("cls");
		SetColor(White, Black);
	} while (vibor > 0);


	delete[] par;
	delete[] par2;
	delete[] par5;
	delete[] parav;
	par = nullptr;
	par2 = nullptr;
	par5 = nullptr;
	parav = nullptr;
	return 0;
}
