// Template argument deduction.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

#define EQ(T) if (typeid(T1) == typeid(T)) 

template<typename T1, typename T2> T1 f(T2 f)
{
	EQ(int) std::cout << "f: T1 is int\n";
	else EQ(char) std::cout << "f: T1 is int\n";
	else EQ(float) std::cout << "f: T1 is int\n";
	else std::cout << "f: T1 is unknown\n";
	return (T1)0;
	
};

// неявно інстанціювати неможливо
template<typename T1, typename T2> void F(void)
{
	EQ(int) std::cout << "F: T1 is int\n";
	else EQ(char) std::cout << "F: T1 is int\n";
	else EQ(float) std::cout << "F: T1 is int\n";
	else std::cout << "F: T1 is unknown\n";

	std::cout << "F: "<< ((typeid(T1) == typeid(float))? "T1 == T2\n" : "T1 != T2\n");
};


void g(double d)
{
	int i = f<int>(d); // calls convert<int,double>(double)
	char c = f<char>(d); // calls convert<char,double>(double)
	int(*p)(float) = f; // instantiates convert<int, float>(float)

	F<int, int>(); // calls convert<int,double>(double)
	F<char, int>(); // calls convert<char,double>(double)
	

}

int main()
{
	g(3.14);
	system("pause");
    return 0;
}

