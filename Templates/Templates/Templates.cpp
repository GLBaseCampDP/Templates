// Templates.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <type_traits>


int main()
{
	std::cout << std::boolalpha << "Int is default-constructible? "
		<< std::is_default_constructible<int>::value << '\n';

	system("pause");
    return 0;
}



