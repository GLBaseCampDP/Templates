// Template Class Inheritance.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
#define CLASS(CL,m) T m;\
                    CL() : m(T(0)) { }\
                    CL(T n) { m = n; }
class A {};						// базовий клас
template <class T> struct B : public A  { // похідний ШК
	CLASS(B, i);
};

template <class T> struct C {	// ШК для наслідування
	CLASS(C, j);
};
// похідний ШК 
// батьки: ШК B<T> та шаблонний клас C<char> 
template <class T>struct D : 
	public B<T>, public C<char> {
	CLASS (D,z)
	D(T, T);
	void show();
};
// ctor похідного класу 
// керування ctors батьків
template <class T> D<T>::D(T n1, T n2) :B<T>(n1), z(n2) {}

template <class T> void D<T>::show(){

	cout << "Члени об'єкта: " << z << ' ' << i << ' ' << j;
}


int main() {
	D<int> d(1, 2);
	d.j = 'a';
	d.show();
    return 0;
}

