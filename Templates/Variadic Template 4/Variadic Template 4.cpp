// Variadic Template 4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  
template <class T> T&& f(T&& a) { std::cout << a << " "; return a; }

struct marker {
	template<typename ...Types> marker(Types&&...) {}
};

template<typename... Types> inline void expand(Types&&... arg) {
	marker(f(arg)...); 
	
}



int main()
{
	expand(42, "answer", true);
	system("pause");
    return 0;
}

