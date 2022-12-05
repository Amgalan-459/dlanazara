#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>
#include "time.h"

using namespace std;


int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Time t1(12, 23, 34);
	Time t2(5, 23, 1);
	Time t3;
	t3 = t1 + t2;
	t3.print(); cout << endl;

	
	return 0;
}
