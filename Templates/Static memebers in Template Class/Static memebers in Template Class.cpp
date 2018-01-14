// Static memebers in Template Class.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
#include <typeinfo>

using namespace std;

template <class T> struct A {
	T* p;
	A() { p = new T; counter++; }
	~A() { delete p; counter--; }
	static void getCOUNTER();// static method
	static void getCOUNTERT();// static method
	static T getCounterT(T a);// static method
	static int counter; // static template data
	static T counterT; // static template data
};
// definition template static field 
template <class T> T A<T>::counterT = (T)100;
//template <class T> T A<T>::counterT ; 
template <class T> int A<T>::counter = 0;
template <class T> void A<T>::getCOUNTER() { cout << typeid(T).name() << " - objects is " << counter << '\n'; }
template <class T> void A<T>::getCOUNTERT() { cout << typeid(T).name() << " - objects is " << (int)A<T>::counterT << '\n'; }
template <class T> T A<T>::getCounterT(T a) { T i = a; cout << typeid(T).name() << " - objects is " << (int)A<T>::counterT << '\n'; return i; }



int main() {
	A<int> x, y, z;
	A<double> a, b;
	A<int>::getCOUNTER(); // output 3
	a.getCOUNTER();// output 2
	A<char>::getCOUNTER();// output 0
	A<char>::getCOUNTERT();// output 100
	A<char>::counterT = char(0);
	A<char>::getCounterT(1);// output 1



	return 0;
}