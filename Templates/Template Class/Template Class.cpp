// Template Class.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"

#include <iostream>

// ������ �����
template <class T, unsigned int size>  class A {
	T *p;	// ����. ���� �����  ��
public:
	int i;	// ���� �����  ��
	A() { p = new T[size]; i = 1; }	// ����������� ��
	~A() { delete p; }	// ���������� ��
	void init() {// �������-���� ��
			for (int i = 0; i<size; i++)
			p[i] = T(i);
	}
};

// ��������� ��������� ��� ����������
typedef A<int, 50> A50;

// ��������� ��������� ��� �� � �����������
// typedef TC tc;


void main()
{
	A<int, 10> a;	// ��������� ��'���� a
	A<char, 10> b;	// ��������� ��'���� b
	A50 c;	// ��������� ��'���� c
	a.init();	// ������ �������-�����
	std::cout << b.i;
}


