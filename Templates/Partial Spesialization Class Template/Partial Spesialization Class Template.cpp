// Partial Spesialization Class Template.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
#define OUT(S, i) { std::cout << S << " i= " << i << '\n'; }

template <class T1, class T2, int i> struct A
{
	A() OUT(" Temlate definition ", i);
};

template <class T1, int i> struct A <T1, T1*, i>
{
	A() OUT(" Partial specialization A<T1, T1*, i> ", i);
};
template <class T1, class T2> struct A <T1, T2, 3>
{
	A() OUT(" Partial specialization A<T1, T2, 3> ", 3);
	
};

template <class T1> struct A <T1, T1*, 4>
{
	A() OUT(" Partial specialization A <T1, T1*, 4> ", 4); 
};


int main() {
	A<int, double, 1> x; 	// ������ �������������
	// ������������ ��������� ������������
	A<int, int*, 2> y;	
	A<int, char, 3> z;	
	A<int, int*, 4> n;	
    return 0;
}

