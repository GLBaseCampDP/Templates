// Template Class Default Value for MethodTemplateParameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

template<class T = double> struct A
{
	T get(T a = (T)1)
	{
		return (T)a;
	}
};

int main()
{
	A<> c;
	c.get(1);
	return 1;
}

