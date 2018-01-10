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

void main() {
	int j = 2; float f = 0.5; char c = 'a';
	A a, b;
	char* mes = "Min value is: ";
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

