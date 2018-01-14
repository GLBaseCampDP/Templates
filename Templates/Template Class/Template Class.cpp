// Template Class.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

// Шаблон класу
template <class T, unsigned int size>  class A {
	T *p;	// закр. член даних  ШК
public:
	int i;	// член даних  ШК
	A() { p = new T[size]; i = 1; }	// конструктор ШК
	~A() { delete p; }	// деструктор ШК
	void init() {// функція-член ШК
			for (int i = 0; i<size; i++)
			p[i] = T(i);
	}
};

// створення псевдоімені для контейнера
typedef A<int, 50> A50;

// створення псевдоімені для ШК є забороненим
// typedef TC tc;


void main()
{
	A<int, 10> a;	// створення об'єкта a
	A<char, 10> b;	// створення об'єкта b
	A50 c;	// створення об'єкта c
	a.init();	// виклик функції-члена
	std::cout << b.i;
}


