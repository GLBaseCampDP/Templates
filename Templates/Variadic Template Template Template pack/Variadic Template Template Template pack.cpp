// Variadic Template Template Template pack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

// Variadic Template Unpacking parameter pack of args.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  
#include <vector>  


using namespace std;


template <template <typename, typename...> class TTPack, typename Type, typename... Types>
Type Sum(const TTPack<Type, Types...>& arg)
{
	Type s = (Type)0;
	for (const auto& v : arg) {
		s += v;
	}
	return s;
}









int main()
{
	std::cout << Sum(std::vector<int> { 1, 2, 3 });

	//V<int> v(1, 2, 3, 4); //v.add(1, 2,3,4);
	//std::vector<int> a = { 5, 6, 7 };


	system("pause");
	return 0;
}

