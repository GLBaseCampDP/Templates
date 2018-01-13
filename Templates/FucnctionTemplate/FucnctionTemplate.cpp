// FucnctionTemplate.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
template <class T, class T1>// прототип ШФ
T min(T value, T1 value1, const char*);

struct A {
	bool operator <(A& a) { return true; }
};
std::ostream& operator<< (std::ostream& s, A&) {
	s << "Wow";
	return s;

}

template double min<double, double&>(double, double&, const char*);
template float min<>(float, double, const char*);
template char min(char, char, const char*);
template double min<double, double&>(double, double&, const char*);



//f<>('a'); // instantiates and calls f<char>(char)
//f(7); // instantiates and calls f<int>(int)
//void(*ptr)(std::string) = f; // instantiates f<string>(string)

void main() {
	int j = 2; float f = 0.5; char c = 'a';
	A a, b;
	char* mes = "Min value is: ";
	
	min<int,short, const char*>(1, (short)1, mes); // char min<int, short, const char*);
	min<>('a', 1, mes); // char min<char, int, const char*);
	min((float)1, (int)1, mes); // float min<float, int, const char*);
	void* (*p)(void*, void*, const char* ) = min; // void* min<void*, void*, const char*);
	p(NULL, NULL, mes);
	
	//min<>(double, char, char*);
	// використання з даними різних типів
	min(f, j, mes);
	min(f, c, mes);
	min(a, b, mes);
	min<double, double>(f, c, mes);
}

// оголошення ШФ
template <class T, class T1>
T min(T value, T1 value1, const char* mes) {
	T v = (T)value1; // використання в тілі шаблонного типу
	if (value<value1) v = value;
	std::cout << mes << v << "\n";
	return v;
};

