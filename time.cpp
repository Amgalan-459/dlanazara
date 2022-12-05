#include "Time.h"

Time::Time(int _ch, int _min, int _sec){
	if (_ch >= 24)
		ch = _ch - 14;
	else ch = _ch;
	if (_min >= 60)
		min = _min - 60;
	else min = _min;
	if (_sec >= 60)
		sec = _sec - 60;
	else sec = _sec;
}

Time Time::operator+(Time _t2){
	Time tmp;
	tmp.ch = ch + tmp.ch;
	tmp.min = min + tmp.min;
	tmp.sec = sec + tmp.sec;
	return tmp;
}

Time Time::operator-(Time _t2){
	Time tmp;
	tmp.ch = ch - tmp.ch;
	tmp.min = min - tmp.min;
	tmp.sec = sec - tmp.sec;
	return tmp;
}

void Time::print(){
	cout << ch << ":" << min << ":" << sec;
}

void Time::Set_ch(int _ch){
	if (_ch >= 24)
		ch = _ch - 14;
	else ch = _ch;
}

void Time::Set_min(int _min){
	if (_min >= 60)
		min = _min - 60;
	else min = _min;
}

void Time::Set_sec(int _sec){
	if (_sec >= 60)
		sec = _sec - 60;
	else sec = _sec;
}

void Time::prov(int _ch, int _min, int _sec){
	if (_ch >= 24)
		ch = _ch - 14;
	else ch = _ch;
	if (_min >= 60)
		min = _min - 60;
	else min = _min;
	if (_sec >= 60)
		sec = _sec - 60;
	else sec = _sec;
}
