// Template Template Parameters.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
template <class Type> struct B
{
Type r;
};

template <class T1, template<class Type> class T2> struct A
{

	T1 k;
	T2< T1 > d;
	T2<double> d1;

};
A<int, B> m;



int main()
{
	m.k = 45;       m.d.r = 60;   m.d1.r = 3.14;
    return 0;
}

