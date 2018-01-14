// Template Class Default Value for Template parameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// оголошення ШК з параметром 
// який приймає аргумент по замовчуванні
template <class T, class Type = int >
class A {
public:
	Type i;// член даних
	A() { i = (Type)0; }
	A(Type j) { i = j; }
};

int main() {
	// правильні оголошення
	A<int> t1;
	A<char> t2('a');
	A<char, double> t3('a');
	//A<, char> t4('a');  помилка
	return 0;
}

template <class T, class Type = int> A<T, Type>::A() { i = (Type)0; }
template <class T, class Type> A<T, Type>::A() { i = (Type)0; }

