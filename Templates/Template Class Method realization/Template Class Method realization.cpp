// Template Class Method realization.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
// Шаблон класу
template <class T, unsigned int size>  class A {
public:
	T i;            // член даних  ШК
	A() {}          // конструктор ШК
	~A() {}         // деструктор ШК
	T init(T);     // декларація методу ШК
};

// реалізація функції-членa ШК
template <class T, unsigned int size> T A<T, size>::init(T i)
{
	this->i = i;
	return this->i;
}

void main() {
	A<int, 10> a;    // створення об'єкта a
	A<char, 10> b;   // створення об'єкта b
	a.init(10);      // виклик функції-члена
	std::cout << b.i;
}
