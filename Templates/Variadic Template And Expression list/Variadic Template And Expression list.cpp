// Variadic Template And Expression list.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>  

template<class...Types> void F(Types...arg) {
	std::cout << "Ops";
}

void F(int a1, int a2, int a3, int a4, int a5, int a6) {
	std::cout << "call with - " << a1 << a2 << a3 << a4 << a5 << a6 << '\n';
}

template<class...Types> int f(Types...arg) {
	int size = sizeof...(Types);
	switch (size) {// Expression list
	case 0: F(99, 99, 99, 99, 99, 99);
		break;
	case 1: F(99, 99, arg..., 99, 99, 99);
		break;
	case 2: F(99, 99, arg..., 99, 99);
		break;
	case 3: F(arg..., 99, 99, 99);
		break;
	case 4: F(99, arg..., 99);
		break;
	case 5: F(99, arg...);
		break;
	case 6: F(arg...);
		break;
	default:
		F(0, 0, 0, 0, 0, 0);
	}
	return size;
}


int main(void) {
	f();
	f(1);
	f(1, 2);
	f(1, 2, 3);
	f(1, 2, 3, 4);
	f(1, 2, 3, 4, 5);
	f(1, 2, 3, 4, 5, 6);
	f(1, 2, 3, 4, 5, 6, 7);
	system("pause");
	return 0;
}

