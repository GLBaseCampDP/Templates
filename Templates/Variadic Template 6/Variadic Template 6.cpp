// Variadic Template 6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  

void F() {} // завершающая версия

template<typename T, typename... Types>
void F(const T& arg, const Types&... args)
{
	std::cout << arg;
	F(args...); // arg тут уже не розпаковується
}


int main()
{
	F('a', 1, 1.3, "Ops");
    return 0;
}

