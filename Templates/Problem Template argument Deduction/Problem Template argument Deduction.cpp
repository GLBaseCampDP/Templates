// Problem Template argument Deduction.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#define OUT(S) { std::cout << S; }

template <class T> T s(T& v1, T& v2) {
	OUT(" s<T&, T&>\n")
	return v1 + v2;
};
template <class T> T u(T v1, T v2) {
	OUT(" u<T, T>\n")
	return v1 + v2;
};

template<class T> void f() OUT(" f<T>\n"); //1

template<int I> void f() OUT(" f<int>\n"); //2

void main()
{
	double d1 = 1, d2 = 2, z; int i = 1, j = 2;
	z = s(d1, d2);		// правильний виклик
	z = s(i, j);		// правильний виклик	
	//z = s(d1, 2);		// помилка
	//z = s(d1, (double)2);	// помилка
	//z = u(d1, 2);		// можлива помилка
	z = u(d1, (double)2);	// правильний виклик

	f<int>(); // інтерпретується як f<int()>(); тобто як вираз, 
			  // тому буде виклик 1
	//f(); помилка
	// f<>(); помилка
	// для виклику шаблону 2
	f<1>(); 
	system("pause");
}
