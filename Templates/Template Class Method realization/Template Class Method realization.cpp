// Template Class Method realization.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>
// ������ �����
template <class T, unsigned int size>  class A {
public:
	T i;            // ���� �����  ��
	A() {}          // ����������� ��
	~A() {}         // ���������� ��
	T init(T);     // ���������� ������ ��
};

// ��������� �������-����a ��
template <class T, unsigned int size> T A<T, size>::init(T i)
{
	this->i = i;
	return this->i;
}

void main() {
	A<int, 10> a;    // ��������� ��'���� a
	A<char, 10> b;   // ��������� ��'���� b
	a.init(10);      // ������ �������-�����
	std::cout << b.i;
}
