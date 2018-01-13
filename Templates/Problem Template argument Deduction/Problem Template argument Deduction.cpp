// Problem Template argument Deduction.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#define OUT(S) { std::cout << S; }

template <class T> T s(T& v1, T& v2) {
	OUT(" s<T&, T&>\n")
	return v1 + v2;
};
template <class T> T u(T v1, T v2) {
	OUT(" u<T, T>\n")
	return v1 + v2;
};

template<class T> void f() OUT(" f<T>\n"); //1

template<int I> void f() OUT(" f<int>\n"); //2

void main()
{
	double d1 = 1, d2 = 2, z; int i = 1, j = 2;
	z = s(d1, d2);		// ���������� ������
	z = s(i, j);		// ���������� ������	
	//z = s(d1, 2);		// �������
	//z = s(d1, (double)2);	// �������
	//z = u(d1, 2);		// ������� �������
	z = u(d1, (double)2);	// ���������� ������

	f<int>(); // �������������� �� f<int()>(); ����� �� �����, 
			  // ���� ���� ������ 1
	//f(); �������
	// f<>(); �������
	// ��� ������� ������� 2
	f<1>(); 
	system("pause");
}
