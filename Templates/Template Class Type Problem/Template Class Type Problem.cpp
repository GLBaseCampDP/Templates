// Template Class Type Problem.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
template<class T, int* p> class A {};
template<int& C> struct B {};

int a[10];
struct S {
	int m;
	static int p;
} s;
// A<int, "Wow"> a1; помилка: стрінговий літерал
// A<int, &a[2]> a3;   помилка: елемент масиву
// A<char, &s.m> a4;    помилка: нестатичний об’єкт

A<int, (a)> a4;   // ok: 
A<char, (&S::p) > a5;  // ok: address of static member



int* pc;
int cc;
int& ccc = cc;
const int c = 1;
int main() {
	// A<int, 1> a6;      помилка: тимчасовий об’єкт
	// помилка A<short, (char*)c> a7;  A<short, (char*)&c> a8;  A<short, pc> a9; A<short, pc> a10;
	A<short, &cc> a11;

	const int c0 = 1;
	int c00 = 1;
	// помилка - B<&c> b1; 	B<c> b2; B<c0> b3;  B<ccc> b4;  B<c00> b5;
	B<cc> b4;
	return 0;
}




