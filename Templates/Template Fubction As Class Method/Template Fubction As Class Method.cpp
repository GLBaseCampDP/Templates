// Template Fubction As Class Method.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

struct A {
	// �� - ����� �����
	template <class T> T f1(T v1, T v2)
	{
		return v1 + v2;
	};

	// �� - ����� �����
	template <class T> T f2(T v1, T v2);
};

// ��������� ��
template <class T>T A::f2(T v1, T v2)
{
	return v1 - v2;
};

void main() {
	A a;
	double d1 = 1, d2 = 2, z;
	z = a.f1(d1, d2);	// ������� ��
	z = a.f2(d1, d2);	// ������� ��
}



