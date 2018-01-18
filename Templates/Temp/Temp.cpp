// Temp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  

using namespace std;
// ШФ, яка розгорта список параметрів
template<typename ... T> void ignore(T...) { }

// ШФ, яка приймає список параметрів
template<typename ... T> int Sum(T... nums)
{
	int s = 0;
	ignore(s += nums ...);
	return s;
}

// ШФ, яка приймає список параметрів
template<typename Type, typename ... T> Type Sum1(T... nums)
{
	Type s = 0;
	ignore(s += nums ...);
	return s;
}

// ШФ, яка приймає список параметрів
template<int...cnt> int Sum2((&...arr)[cnt])
{
	int s = 0;
	ignore(s += cnt ...);
	return s;
}

// перевірка чи усі аргументи додатні
template<typename ... T> bool is_Pos(T... nums)
{
	bool is_pos = true;
	ignore(is_pos = is_pos && nums >= 0 ...);
	return is_pos;
}

int main()
{
	std::cout << Sum(1, 2, 3) << "  " << Sum1<double>(1.1, 2.2, 3.3);

	system("pause");
	return 0;
}

