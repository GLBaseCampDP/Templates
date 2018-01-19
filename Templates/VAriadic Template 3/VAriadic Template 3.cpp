// VAriadic Template 3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>  

template<typename... Types> inline void marker(Types&&...) {}

template <class T> T&& f(T&& a) { std::cout << a << " "; return a; }

template<typename... Types> inline void expand(Types&&... arg) {
	marker(f(arg)...); // f(arg) виклик якоїсь функції
}





int main()
{
	expand(42, "answer", true);
	system("pause");
    return 0;
}

