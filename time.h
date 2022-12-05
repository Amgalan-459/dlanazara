#pragma once
#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include <string>
using namespace std;
class Time{
	int ch;
	int min;
	int sec;
public:
	Time(int _ch=0, int _min=0, int _sec=0);
	Time operator + (Time _t2);
	Time operator - (Time _t2);
	void print();
	void Set_ch(int _ch);
	void Set_min(int _min);
	void Set_sec(int _sec);
	void prov(int _ch, int _min, int _sec);
};
