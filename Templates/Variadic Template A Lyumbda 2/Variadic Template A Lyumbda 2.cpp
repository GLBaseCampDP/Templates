// Variadic Template A Lyumbda 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include <iostream>  

template <class... Types>
void foreach(Types... args)
{
	bool b[] = { [=]() {
		std::cout << args << "\n";
		return true;
	}()... };
}


	


int main()
{
	foreach(10, 20.2, true);

    return 0;
}

