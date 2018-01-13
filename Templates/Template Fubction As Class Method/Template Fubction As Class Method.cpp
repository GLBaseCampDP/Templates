// Template Fubction As Class Method.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

struct A {
	// ШФ - метод класу
	template <class T> T f1(T v1, T v2)
	{
		return v1 + v2;
	};

	// ШФ - метод класу
	template <class T> T f2(T v1, T v2);
};

// реалізація ШФ
template <class T>T A::f2(T v1, T v2)
{
	return v1 - v2;
};

void main() {
	A a;
	double d1 = 1, d2 = 2, z;
	z = a.f1(d1, d2);	// викилик ШФ
	z = a.f2(d1, d2);	// викилик ШФ
}



