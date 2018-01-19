// Variadic Template 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <utility>
#include <iostream>  

template<typename T>
int marker(T&& t) { return t; }

template<typename... Types>
void expand(Types&&... arg){
	
	
	int m[] = { 0, (int)marker(std::forward<Types>(arg))... };
	for (const auto& v : m) {
		std::cout << v << "  ";
	}
}



int main()
{
	expand(1, 2, 3);
	system("pause");

	return 0;
}


