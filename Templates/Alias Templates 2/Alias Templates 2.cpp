// Alias Templates 2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
template<typename T> struct B                   
{
	using type = T; // створення аліаса на шаблонний тип шаблона B
	type i;
};
template<typename B> typename B::type g(const B& c) 
{
	typename B::type n = c.i;// використання аліаса в ШФ
	return n;
}
template<typename B> struct P {                      

	typename B::type i;// використання аліаса в іншому ШК
};

int main() {
	B<int> b = { 11 };           // створення об’єкта шаблона В
	std::cout << g(b) << '\n'; 	  // використання шаблона функції
	P < B<int> > p = { 12 };    // створення об’єкта шаблона P 
	std::cout << p.i << '\n';
    return 0;
}



