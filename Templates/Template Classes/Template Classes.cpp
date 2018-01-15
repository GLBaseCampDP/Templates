// Template Classes.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>

// попереднє оголошення ШК
template <class Type> class AM;

AM<char>* p1; // на вказівник на об'єкт

			   // повне оголошення ШК
template <class Type> struct AM {
	Type i;	// член даних
	AM() { i = (Type)1; }	// конструктор по замовчуванні
	AM(Type j) {         	// конструктор з аргументами
		i = j;
	}
};

// основний ШК
template <class T, class T1 = int> struct A {
	T i;             // член даних
	AM<T> am;     // об'єкт ШК
	AM<int> aam;     // об'єкт шаблонного класу
	AM<char>* p;    // вказівник на шаблонний клас
	//AM<long>;       // вкладений шаблонний клас
	A();            // конструктори ШК
	A(T j);
	~A() { delete p; } // деструктор ШК

						// вкладений шаблон
	template <class T3, class T2> struct A_incl {
		T2 b;
		T3 f() { return (T3)0; }
	};
};

/* реалізації конструкторів з передаванням аргументів конструкторам об'єктів-членів і ініціалізацією членів ШК
*/
template <class T, class T1 = int>
A<T, T1>::A() :aam() {
	p = new AM<char>('a');        	i = aam.i; am.i = ++i;
}
template <class T, class T1 = int>
A<T, T1>::A(T j) : aam(j) {
	p = new AM<char>('b'); 		i = -aam.i; am.i = --i;
}
// порожній ШК
template <class T> class A_empty {};

// створення об’єкта вкладеного шаблона 
A<int>::A_incl<double, float> inc;

void main()
{
	A<int> a(2);
	std::cout << "Object: " << a.i << "\n" <<
		"Object as class member: " << a.aam.i << "\n" <<
		"Object as class member: " << a.am.i << "\n" <<
		"Pointer to Object as class member object: " << a.p->i << "\n";
	A_empty<int> em;
}


