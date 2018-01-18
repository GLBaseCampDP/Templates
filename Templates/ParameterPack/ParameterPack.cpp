// ParameterPack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>  

using namespace std;

void print() { //1
	cout << endl;
}

template <typename T> void print(const T& t) { //2
	cout << t << endl;
}

template <typename T, typename... Args> void print(const T& first, const Args&... rest) {//3
	cout << first << ", ";
	print(rest...); // рекурсивний виклик для розгортання набору аргументів
}
template <typename T, typename... Args> struct A{

	void print1(const T& first, const Args&... rest) {//4
	cout << first << ", ";
	print(rest...); // рекурсивний виклик для розгортання набору аргументів
	}
	void print2(T* first, Args&&... rest) {}
	void print3(T&& first, Args*... rest) {}
};


int main()
{
	print(); // call - 1
	print(1); // calls - 2

			  // calls - 3
	print(10, 20);
	print(100, 200, 300);
	print("first", 2, "third", 3.14159);
	A<char*, int> a0;
	A<char*, int, char*, double> a1; 
	 a1.print1("first", 2, "third", 3.14159);// calls - 4
	 system("pause");
	return 0;
}





